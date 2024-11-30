/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-12 11:13:25 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-12 11:13:25 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	char	*str;
	char	*first_word_start;
	char	*first_word_end;

	str = argv[1];
	if (argc > 1)
	{
		while (*str == ' ' || *str == '\t')
			str++;
		first_word_start = str;
		while (*str && *str != ' ' && *str != '\t')
			str++;
		first_word_end = str;
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str)
		{
			while (*str)
			{
				if (*str == ' ' || *str == '\t')
				{
					while(*str == ' ' || *str == '\t')
						str++;
					if(*str)
						write(1, " ", 1);
				}
				else
				{
					write(1, str, 1);
					str++;
				}
			}
			write(1, " ", 1);
		}
		while(first_word_start < first_word_end)
		{
			write(1, first_word_start, 1);
			first_word_start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
