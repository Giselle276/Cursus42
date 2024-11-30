/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 09:50:23 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 09:50:23 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	int	i;
	char	*str;
	char	*str2;
	char	*str3;

	i = 0;
	str = argv[1];
	str2 = argv[2];
	str3 = argv[3];
	if (argc == 4 && str2[1] == '\0' && str3[1] == '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] == str2[0])
				str[i] = str3[0];
			write(1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
