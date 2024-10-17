/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:56:32 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/01 10:56:35 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	dest = (char *) malloc(ft_strlen(s1) + ft_strlen(s2)+1);
	if (!dest)
		return (0);
	ft_strlcpy(dest, s1, ft_strlen(s1) + 1);
	ft_strlcpy(dest + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (dest);
}
