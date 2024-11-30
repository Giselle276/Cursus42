/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 09:04:11 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 09:04:11 by gmaccha-         ###   ########.fr       */
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
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i] - 'a' + 13) % 26 + 'a';
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = (str[i] - 'A' + 13) % 26 + 'A';
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
