/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 16:41:16 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-01 16:41:16 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while ( str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str;
	str = argv[1];
	if (argc < 2)
		printf("Error\n");
	else
	printf("%s", str);
	return (0);
}