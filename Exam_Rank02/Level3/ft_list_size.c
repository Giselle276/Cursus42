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

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size ( t_list *begin_list)
{
	int c;
	c=0;
	while(begin_list)
	{
		c++;
		begin_list=begin_list->next;
	}
	return(c);
}
