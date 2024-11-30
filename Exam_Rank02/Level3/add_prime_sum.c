/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-12 09:48:58 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-12 09:48:58 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write ( 1, &c,1);
}

void	ft_putnbr(int n)
{
	if ( n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if ( n >= 10)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	else
	{
		ft_putchar(n+48);
	}

}

int	is_prime(int num)
{
	int	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <=num)
	{
		if ( num % 2 == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(const char *nbr)
{
	int	res;
	int	signo;

	res = 0;
	signo = 1;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
	{
		nbr++;
	}
	if (*nbr == '-')
		signo = -1;
	if (*nbr == '-' || *nbr == '+')
		nbr++;
	while (*nbr >= '0' && *nbr <= '9')
	{
		res = res * 10 + *nbr - '0';
		nbr++;
	}
	return (res * signo);
}

int	main (int argc, char *argv[])
{
	if (argc == 2)
	{
		int	nbr = ft_atoi(argv[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum = sum + nbr;
			nbr--;
		}
		ft_putnbr(sum);
	}
	if (argc!= 2)
		ft_putnbr(0);
	write(1,"\n",1);
	return (0);
}
