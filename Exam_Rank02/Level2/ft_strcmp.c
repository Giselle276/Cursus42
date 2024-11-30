/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 13:17:01 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 13:17:01 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3)
		printf("Error\n");
	else
		printf("Resultado:%d", ft_strcmp(s1, s2));
	return (0);
}
