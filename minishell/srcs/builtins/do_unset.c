/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:53:22 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:53:22 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include "builtins.h"
#include "minishell.h"

int	do_unset(t_action action, char ***env)
{
	int		i;
	int		fd;

	i = 1;
	fd = do_redirects_builtin(action);
	if (fd > 2)
		close(fd);
	if (!action.exec.argv[i] || action.pipe_in != 0 || action.pipe_out != 0)
		return (0);
	while (action.exec.argv[i])
		unset_env(action.exec.argv[i++], *env);
	return (0);
}
