/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 13:47:47 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 13:47:47 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*dest;

	i = 0;
	len = 0;
	while(src[len])
		len++;
	dest = malloc(sizeof(*dest) * (len + 1));
	if (dest != '\0')
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
