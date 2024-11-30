/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 11:21:07 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-18 11:21:07 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar (char c)
{
	write(1,&c,1);
	return (c);
}

int ft_atoi(char *s)
{
	int signo = 1;
	int	resul = 0;

	while(*s==' ' || (*s>=9 && *s<=13))
		s++;
	if (*s == '-')
		signo = -1;
	if (*s == '-' || *s == '+')
		s++;
	while(*s>='0' && *s<='9')
	{
		resul = resul * 10 + *s - '0';
		s++;
	}
	return (signo * resul);
}

void	ft_putnbr(int n)
{
	if (n>=10)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	else
		ft_putchar(n+48);
}
int main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc ==2)
	{
		i = 1;
		number = ft_atoi(argv[1]);
		while((i >=1 && i <= 9) && number <= 238609293)
		{
			ft_putnbr(i);
				write(1," x ", 3);
			ft_putnbr(number);
				write(1," = ", 3);
			ft_putnbr(i * number);
			write(1,"\n",1);
			i++;
		}
	}
	else
	write(1,"\n",1);
	return (0);
}
