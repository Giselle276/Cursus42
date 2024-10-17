/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:25:09 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/07 11:18:55 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	new = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		first = ft_lstnew(lst->content);
		if (!first)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		first->content = f(first->content);
		ft_lstadd_back(&new, first);
		lst = lst->next;
	}
	return (new);
}
