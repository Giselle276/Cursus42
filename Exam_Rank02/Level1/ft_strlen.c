/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 17:10:13 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-01 17:10:13 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
#include <stdio.h>

int	main (int argc, char *argv[])
{
	char	*str;

	str = argv[1];
	if (argc != 2)
		printf("Error\n");
	else
	printf("Cantidad:%d", ft_strlen(str));
	return (0);
}