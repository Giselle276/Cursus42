/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 12:46:21 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 12:46:21 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	signo;

	res = 0;
	signo = 1;

	while(*str == ' ' || (*str >= 9 && *str<= 13))
		str++;
	if (*str == '-')
		signo = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * signo);
}


#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	const char	*nptr;

	nptr = "54";
	printf("Resul Ft_atoi: %d\n", ft_atoi(nptr));
	printf("Resul atoi: %d\n", atoi(nptr));
	return (0);
}

