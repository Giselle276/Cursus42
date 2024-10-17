/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:01:44 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/02 15:01:46 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr_list;

	arr_list = (t_list *) malloc(sizeof(t_list) * 1);
	if (!arr_list)
		return (0);
	arr_list->content = content;
	arr_list->next = 0;
	return (arr_list);
}
