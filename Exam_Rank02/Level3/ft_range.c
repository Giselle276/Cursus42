/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 12:34:41 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-14 12:34:41 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i=0;
	int len;
	int *range;
	if(start >= end)
		len = start - end +1;
	else
		len = end - start +1;
	range= malloc(len * sizeof (int));
	if(!range)
		return (0);
	while(i < len)
	{
		if(start < end)
		{
			range[i]= start;
			start++;
			i++;
		}
		else
		{
			range[i]= start;
			start--;
			i++;
		}
	}
	return (range);
}
#include <stdio.h>
int main ()
{
	int start =  5;
	int end = 2 ;
	int *range = ft_range(start, end);
	if (range)
	{
		int i = 0;
		while (range[i] != end)
		{
			printf("%d", range[i]);
			i++;
		}
		printf("%d", range[i]);
		free(range);
	}
	return (0);
}
