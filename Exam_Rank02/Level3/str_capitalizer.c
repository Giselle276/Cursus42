/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 11:38:17 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-19 11:38:17 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	if ( str[i]>='a' && str[i]<='z')
		str[i] = str[i] - 32;
	write(1,&str[i],1);
	while(str[++i])
	{
		if(str[i] >='A' && str[i]<='Z')
			str[i] = str[i] + 32;
		if((str[i] >='a' && str[i]<='z') && (str[i - 1] == ' ' || str[i - 1] =='\t'))
			str[i] = str[i] - 32;
		write(1,&str[i],1);
	}
}
int main (int argc, char *argv[])
{
	int i;
	if(argc < 2)
		write(1,"\n",1);
	else
	{
		i = 1;
		while(i < argc)
		{
			str_capitalizer(argv[i]);
			write(1,"\n",1);
			i++;
		}
	}
	return (0);
}
