/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-23 09:03:11 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-23 09:03:11 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int n)
{
	if(n>=10)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	else
	{
		ft_putchar(n+48);
	}
}

int main (int argc, char *argv[])
{
	int i;
	int sum=0;
	(void)argv;
	if(argc==1)
	{
		ft_putnbr(0);
		write(1,"\n",1);
	}
	else
	{
		i = 1;
		while(i < argc)
		{
			sum = sum +1;
			i++;
		}
		ft_putnbr(sum);
		write(1,"\n",1);
	}
	return (0);
}
