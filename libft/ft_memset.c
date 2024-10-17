/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:16:53 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/09/27 15:24:17 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*tmp_str;
	size_t				i;

	i = 0;
	tmp_str = s;
	while (i < n)
	{
		tmp_str[i] = c;
		i++;
	}
	return (s);
}
