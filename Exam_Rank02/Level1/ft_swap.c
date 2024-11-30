/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 17:16:48 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-01 17:16:48 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include<stdio.h>

int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 5;

	printf("Valor de a antes del cambio:%d\n", a);
	printf("Valor de b antes del cambio:%d\n", b);
	ft_swap(&a,&b);
	printf("Valor despues del cambio a:%d\n", a);
	printf("Valor despuues del cambio b a:%d\n", b);
	return (0);
}
