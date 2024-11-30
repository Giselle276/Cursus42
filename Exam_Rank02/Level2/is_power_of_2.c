/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 11:52:41 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-05 11:52:41 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main ()
{
	int	n = 5;

	printf("%d",is_power_of_2(n));
	return (0);
}
