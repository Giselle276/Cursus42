/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-15 13:51:20 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-15 13:51:20 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	int	i;
	int	j;
	char	*str1;
	char	*str2;
	i = 0;
	j = 0;
	str1 = argv[1];
	str2 = argv[2];

	if (argc == 3)
	{
		while(str2[j] && str1[i])
		{
			if(str2[j] == str1[i])
				i++;
			j++;
		}
		if (str1[i] =='\0')
			write(1,"1",1);
		else
			write(1,"0",1);
	}
	write(1,"\n",1);
	return (0);
}
