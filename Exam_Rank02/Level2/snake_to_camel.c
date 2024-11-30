/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-09 11:57:01 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-09 11:57:01 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (str[i] == '_')
			{
				i++;
				str[i] = str[i] - 32;
			}
			write(1,&str[i],1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
