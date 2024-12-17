/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 13:24:52 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 13:24:52 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(char *s, int c)
{
	while(*s!='\0')
	{
		if(*s==c)
			return((char *)s);
		s++;
	}
	return(0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i=0;
	while(s[i]!='\0')
	{
		if(ft_strchr(reject,s[i])!=0)
			break;
		i++;
	}
	return(i);
}
