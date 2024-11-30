/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-09 11:32:08 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-09 11:32:08 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octect)
{
	int	i;
	unsigned char	resul;

	i = 8;
	resul = 0;
	while (i > 0)
	{
		resul = resul * 2 + (octect %2);
		octect = octect / 2;
		i--;
	}
	return (resul);
}

#include <stdio.h>

int main ()
{
	unsigned char octect=2;


	printf("%d",reverse_bits(octect));
	return (0);
}
