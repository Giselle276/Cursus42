/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-09 09:49:48 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-09 09:49:48 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned	int	i;
	int	resul;

	i = 0;
	resul = tab[i];
	if (len == 0)
		return (0);
	while(i < len)
	{
		if (resul < tab[i])
			resul = tab[i];
		i++;
	}
	return (resul);
}
#include <stdio.h>

int main ()
{
	int	tab[] = {1, 5, 3,15,36,1};
	printf("%d", max(tab,6));
	return (0);
}
