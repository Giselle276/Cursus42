/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-09 14:33:21 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-09 14:33:21 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
	int	i;
	int	j;
	char *str1;
	char *str2;

	i = 0;
	j = 0;
	str1 = argv[1];
	str2 = argv[2];
	if (argc == 3)
	{
			while(str2[j] != '\0')
			{
				if (str1[i] == str2[j])
					i++;
				j++;
			}
			if (str1[i] == '\0')
			{
				i = 0;
				while (str1[i] != '\0')
				{
					write(1, &str1[i], 1);
					i++;
				}
			}
	}
	write(1,"\n", 1);
	return (0);
}
