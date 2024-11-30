/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 11:11:31 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 11:11:31 by gmaccha-         ###   ########.fr       */
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
			if (str[i]>='a' && str[i] <= 'z')
				str[i] = ('a' + 'z') - str[i];
			else if (str[i]>='A' && str[i] <= 'Z')
				str[i] = ('A' + 'Z') - str[i];
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
