/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 10:47:00 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-14 10:47:00 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int	ft_list_size ( t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size (begin_list ->next));
}


//otra forma
#include <stdio.h>
int	ft_list_size ( t_list *begin_list)
{
	int c;
	c=0;
	while(begin_list!=NULL)
	{
		c++;
		begin_list=begin_list->next;
	}
	return(0);
}
