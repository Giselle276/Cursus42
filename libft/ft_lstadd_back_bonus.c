/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:15:43 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/05 12:15:46 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_list;

	if (lst && new)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			tmp_list = ft_lstlast(*lst);
			tmp_list->next = new;
		}
	}
}
