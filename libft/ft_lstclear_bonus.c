/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus..c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:01:20 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/05 14:01:22 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_list;

	if (lst)
	{
		while (*lst)
		{
			tmp_list = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp_list;
		}
	}
}
