/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:55:05 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:55:05 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "error_msgs.h"
#include "input_handler.h"
#include "minishell.h"

inline char	*parse_cmd(char *cmd, char **env, int type)
{
	char	*res;

	res = NULL;
	if (type == asterisk)
		res = do_parse_whith_asterisk(cmd, env);
	else
		res = do_parse(cmd, env);
	if (res == NULL)
		print_err(MSG_ERR_CMD_PARSEERR, NULL, 0);
	return (res);
}
