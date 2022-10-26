/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:53:18 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:53:18 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"
#include "builtins.h"
#include "error_msgs.h"
#include "minishell.h"

int	do_pwd(t_action action, char **env)
{
	int		fd;
	char	*wd;

	fd = do_redirects_builtin(action);
	wd = getcwd(NULL, 0);
	if (wd == NULL)
		wd = get_env_value("PWD", env);
	if (!wd)
	{
		print_err(MSG_ERR_PWD, NULL, 0);
		if (fd > 2)
			close(fd);
		return (1);
	}
	if (fd > 0)
	{
		write(fd, wd, ft_strlen(wd));
		write(fd, "\n", 1);
	}
	if (fd > 2)
		close(fd);
	free(wd);
	return (0);
}
