/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 10:32:11 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-19 10:32:11 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int num_len(int n)
{
    int len;
    if (n <= 0)
        len = 1;
    else
        len = 0;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
	return len;
}
void convert_to_str(char *str, long num, int len)
{
    str[len] = '\0';
    if (num == 0)
        str[0] = '0';
    else
    {
        while (num > 0)
        {
            str[--len] = num % 10 + '0';
            num = num / 10;
        }
    }
}
char *ft_itoa(int nbr)
{
    int len = num_len(nbr);
    char *str;
    long num = nbr;
    str = malloc(len + 1);
    if (!str)
        return (0);
    if (num < 0)
    {
        str[0] = '-';
        num = num * -1;
    }
    convert_to_str(str, num, len);
    return (str);
}

#include <stdio.h>

int main()
{
	int	n = +10;
	printf("%s",ft_itoa(n));
	return (0);
}
