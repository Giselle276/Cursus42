/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:14:01 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/09/21 11:14:04 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last_occurrence;
	unsigned char	tmp_c;

	last_occurrence = 0;
	tmp_c = (unsigned char ) c;
	while (*s != '\0')
	{
		if (*s == tmp_c)
			last_occurrence = (char *) s;
		s++;
	}
	if (tmp_c == 0)
		return ((char *) s);
	return (last_occurrence);
}
