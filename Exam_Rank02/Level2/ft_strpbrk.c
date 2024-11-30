/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 09:05:56 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-05 09:05:56 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if(!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;

	str1 = argv[1];
	str2 = argv[2];
	argc =3;
	printf("Respuesta:%s\n",ft_strpbrk(str1,str2));
	printf("Respuesta Real:%s\n",strpbrk(str1,str2));
	return (0);

}
