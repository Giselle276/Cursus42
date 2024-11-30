/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 09:59:19 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-05 09:59:19 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}

size_t	ft_strspn (const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i])== 0)
			break;
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;

	str1 = argv[1];
	str2 = argv[2];
	argc =3;
	printf("Respuesta:%lu\n",ft_strspn(str1,str2));
	printf("Respuesta Real:%lu\n",strspn(str1,str2));
	return (0);

}
