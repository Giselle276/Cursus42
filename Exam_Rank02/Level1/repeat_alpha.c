/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 17:29:21 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-01 17:29:21 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	c;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <='z')
				c = (str[i] - 'a') + 1;
			else if (str[i] >='A' && str[i] <= 'Z')
				c = (str[i] - 'A') + 1;
			else
				c = 1;
		while (c)
		{
			write(1, &str[i], 1);
			c--;
		}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
