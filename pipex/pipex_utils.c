/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 12:11:01 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-12-27 12:11:01 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	prep_pipe(int in_file, int out_file)
{
	dup2(in_file, STDIN_FILENO);
	dup2(out_file, STDOUT_FILENO);
}

void	pip_exec(char *cmd, char *env[])
{
	char	**paths;
	char	**args;

	paths = get_path(env);
	args = ft_split(cmd, ' ');
	args[0] = get_exec(args[0], paths);
	execve(args[0], args, env);
}
