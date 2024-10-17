/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:11:56 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/09/22 15:11:59 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dest;

	tmp_src = (char *) src;
	tmp_dest = (char *) dest;
	if (tmp_src < tmp_dest)
	{
		while (n--)
			tmp_dest[n] = tmp_src[n];
	}
	else
		ft_memcpy (tmp_dest, tmp_src, n);
	return (dest);
}
