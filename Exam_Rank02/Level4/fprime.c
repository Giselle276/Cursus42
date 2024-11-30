/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-15 10:29:07 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-15 10:29:07 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[])
{
	int	i;
	int	number;
	char *str;

	str = argv[1];
	if ( argc == 2)
	{
		i = 1;
		number = atoi(str);
		if(number == 1)
			printf("1");
		while(number>= ++i)
		{
			if (number % i == 0)
			{
				printf("%d",i);
				if (number == i)
					break;
				printf("*");
				number = number / i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
