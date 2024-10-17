/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:51:19 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/09/21 10:53:04 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	tmp_c;

	tmp_c = (unsigned char) c;
	while (*s != '\0' && *s != tmp_c)
		s++;
	if (*s == tmp_c)
		return ((char *) s);
	return (0);
}
