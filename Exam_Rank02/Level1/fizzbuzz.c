/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbbuzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 15:24:14 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-01 15:24:14 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	putchar(char c)
{
	write(1, &c ,1);
	return (c);
}
void	putnbr(int n)
{
	if(n > 10)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else
	{
		putchar(n + 48);
	}
}

int	main ()
{
	int	n;

	n = 1;
	while (n < 101)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			write (1, "fizzbuzz", 8);
		}

		else if (n % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		else if (n % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		else
		putnbr(n);
		n++;
		write(1, "\n", 1);
	}

	return (0);
}
