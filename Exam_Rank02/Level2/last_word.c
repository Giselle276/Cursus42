/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-09 09:08:52 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-09 09:08:52 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while(str[i]!='\0')
		i++;
	return(i);
}

int main (int argc, char *argv[])
{
	int	len;
	int	start;
	char	*str;

	str = argv[1];
	len = ft_strlen(str)-1;
	if (argc == 2)
	{
		while(str[len] == 32 || str[len] == 9)
		len--;
		start = len;
		while ((str[start] != 32 && str[start]!= 9) && str[start] !='\0')
			start--;
		start++;
		while(start <= len)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
