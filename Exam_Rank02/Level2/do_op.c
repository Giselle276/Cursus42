/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-04 11:54:13 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-04 11:54:13 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
			if (argv[2][0] == '+')
				printf("%d", atoi(argv[1]) + atoi(argv[3]));
			if (argv[2][0] == '-')
				printf("%d", atoi(argv[1]) - atoi(argv[3]));
			if (argv[2][0] =='*')
				printf("%d", atoi(argv[1]) * atoi(argv[3]));
			if (argv[2][0] == '/')
				printf("%d", atoi(argv[1]) / atoi(argv[3]));
			if (argv[2][0] == '%')
				printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
