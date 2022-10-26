/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_exit_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:51:59 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:51:59 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

#include "bool.h"
#include "builtins.h"
#include "actions_handler.h"

static inline void	do_wait(t_actions *actions)
{
	int	i;

	i = 0;
	while (i < actions->len)
	{
		if (actions->item[i].pid)
			waitpid(actions->item[i].pid, NULL, false);
		i++;
	}
}

inline void	child_exit_handler(t_actions *actions, int *exit_status)
{
	if (actions->item[actions->len - 1].pid)
	{
		waitpid(actions->item[actions->len - 1].pid, exit_status, false);
		do_wait(actions);
	}
	else
		do_wait(actions);
}
