/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basics.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:31:58 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/11 12:32:01 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else
	{
		ft_putstr("(null)");
		return (6);
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int		len;
	long	num;

	num = n;
	len = 0;
	if (num < 0)
	{
		len = len + ft_putchar('-');
		num = num * -1;
	}
	if (num >= 10)
	{
		len = len + ft_putnbr(num / 10);
		len = len + ft_putnbr(num % 10);
	}
	else
		len = len + ft_putchar(num + 48);
	return (len);
}

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n >= 10)
	{
		len = len + ft_putnbr_u(n / 10);
		len = len + ft_putnbr_u(n % 10);
	}
	else
		len = len + ft_putchar(n + 48);
	return (len);
}

int	ft_puthexa_ul(unsigned long long num, int n)
{
	int		len;
	char	hexa_u;
	char	hexa_l;

	len = 0;
	hexa_u = "0123456789ABCDEF"[num % 16];
	hexa_l = "0123456789abcdef"[num % 16];
	if (num >= 16)
		len = len + ft_puthexa_ul(num / 16, n);
	if (n == 0)
		len = len + ft_putchar(hexa_l);
	else
		len = len + ft_putchar(hexa_u);
	return (len);
}
