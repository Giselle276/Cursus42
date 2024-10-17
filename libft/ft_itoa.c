/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:16:14 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/10/01 12:16:17 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int num)
{
	int	len;

	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static void	case_special(char *res, long n, int len)
{
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	else
	{
		while (n > 0)
		{
			res[--len] = (n % 10) + '0';
			n = n / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	long		len;
	char		*res;

	len = num_len(n);
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	res[len] = '\0';
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	case_special(res, n, len);
	return (res);
}
