
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-29 08:49:02 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-29 08:49:02 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer( char *str)
{
	int i =0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i] + 32;
		if((str[i]>='a' && str[i]<='z') && (str[i+1]==' ' || str[i+1]=='\t' || str[i+1]=='\0'))
			str[i]=str[i] - 32;
		write(1,&str[i],1);
		i++;
	}
}
int main (int argc, char *argv[])
{
	if(argc<2)
		write(1,"\n",1);
	else
	{
		int i = 1;
		while(i<argc)
		{
			rstr_capitalizer(argv[i]);
			write(1,"\n",1);
			i++;
		}
	}
	return (0);
}
