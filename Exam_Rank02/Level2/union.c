/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-09 12:47:48 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-09 12:47:48 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main (int argc, char *argv[])
{
	int	i;
	char	*str1;
	char	*str2;
	unsigned	char	seen[256] = {0};
	int	j;
	i = 0;
	j = 0;
	str1 = argv[1];
	str2 = argv[2];
	if (argc ==3)
	{

		while (str1[i] !='\0')
		{
			if (!seen[(unsigned char)str1[i]])
			{
				write (1, &str1[i], 1);
				seen[(unsigned char)str1[i]] = 1;
			}
			i++;
		}
		while (str2[j])
		{
			if (!seen[(unsigned char)str2[j]])
			{
				write (1, &str2[j], 1);
				seen[(unsigned char)str2[j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
