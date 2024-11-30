/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 16:51:57 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-01 16:51:57 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ( s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	*dest;

	str = argv[1];
	dest = argv[2];
	if (argc != 3)
		printf("Error\n");
	else
	{
		printf("Cadena:%s\n", str);
		ft_strcpy(dest, str);
		printf("Resultado: %s\n",dest);
	}
	return (0);
}

