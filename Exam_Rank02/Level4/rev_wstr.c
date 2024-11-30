/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 13:18:11 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-14 13:18:11 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int start;
	int end;
	int i = 0;
	char	*str1;
	int  flag;

	str1 = argv[1];

	if(argc == 2)
	{
		while(str1[i] != '\0')
			i++;
		while(i >= 0)
		{
			while( str1[i] == '\0' || str1[i] == ' ' || str1[i] == '\t')
				i--;
			end = i;
			while(str1[i] && str1[i] != ' ' && str1[i] != '\t')
				i--;
			start = i + 1;

			flag = start;
			while(start <= end)
			{
				write (1, &str1[start],1);
				start++;
			}
			if (flag !=0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
