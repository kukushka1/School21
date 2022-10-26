/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:56:47 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:56:48 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bool.h"
#include "builtins.h"

void	unset_env(char *name, char **env)
{
	int		i;
	char	*tmp;

	if (name == NULL || env == NULL)
		return ;
	i = get_env_i(name, env);
	if (i < 0)
		return ;
	tmp = env[i];
	while (env[i])
	{
		env[i] = env[i + 1];
		i++;
	}
	free(tmp);
}
