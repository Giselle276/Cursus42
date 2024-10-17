/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:48:37 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/11 12:48:44 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr( void *ptr)
{
	int					len;
	unsigned long long	num;

	len = 0;
	num = (unsigned long long) ptr;
	if (ptr == 0)
	{
		len = len + ft_putstr("(nil)");
		return (len);
	}
	len = len + ft_putstr("0x");
	len = len + ft_puthexa_ul(num, 0);
	return (len);
}

static int	convert_type(const char str, va_list args)
{
	int	len;

	len = 0;
	if (str == 'c')
		len = len + ft_putchar(va_arg(args, int));
	else if (str == 's')
		len = len + ft_putstr(va_arg(args, char *));
	else if (str == 'p')
		len = len + ft_putptr(va_arg(args, void *));
	else if (str == 'd' || str == 'i')
		len = len + ft_putnbr(va_arg(args, int));
	else if (str == 'u')
		len = len + ft_putnbr_u(va_arg(args, int));
	else if (str == 'x')
		len = len + ft_puthexa_ul(va_arg(args, unsigned int), 0);
	else if (str == 'X')
		len = len + ft_puthexa_ul(va_arg(args, unsigned int), 1);
	else if (str == '%')
		len = len + ft_putchar('%');
	else
	{
		len = len + ft_putchar('%');
		len = len + ft_putchar(str);
	}
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start (args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			len = len + ft_putchar(str[i]);
		else
		{
			i++;
			if (str[i] != '\0')
				len = len + convert_type(str[i], args);
		}
		i++;
	}
	va_end(args);
	return (len);
}
