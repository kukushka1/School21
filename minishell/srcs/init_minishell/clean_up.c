/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:53:28 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:53:29 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "bool.h"
#include "minishell.h"

void	free_args(t_sh_data *args, int del_env)
{
	int	i;

	if (del_env == true)
	{
		i = 0;
		while (args->env[i] != NULL)
			free(args->env[i++]);
		free(args->env);
	}
	free(args->msg);
	free(args->cmd);
	free(args->res);
	args->msg = NULL;
	args->cmd = NULL;
	args->res = NULL;
}
