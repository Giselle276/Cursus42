/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 14:08:28 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-18 14:08:28 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
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
			range[i]= end;
			end--;
			i++;
		}
		else
		{
			range[i]= end;
			end++;
			i++;
		}
	}
	return (range);
}
#include <stdio.h>
int main ()
{
    int start = 0;
    int end = 2;
    int *range = ft_rrange(start, end);
    if (range)
    {
        int i = 0;
        // Necesitamos saber el tamaño del array que fue creado por ft_rrange
        int len = (end >= start) ? (end - start + 1) : (start - end + 1);
        // Recorrer el array completo hasta el tamaño calculado
        while (i < len)
        {
            printf("%d ", range[i]);
            i++;
        }
        free(range); // Liberar la memoria del array
    }
    return 0;
}
