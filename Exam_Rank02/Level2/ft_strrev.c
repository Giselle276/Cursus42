/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 09:29:36 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-05 09:29:36 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str;

	str = argv[1];
	argc =2;
	printf("Respuesta:%s",ft_strrev(str));
	return (0);

}
