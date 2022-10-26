/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cmd_escaped.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:54:21 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:54:21 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "bool.h"
#include "input_handler.h"

inline int	escaped(char *cmd, int i)
{
	int	j;

	if (i-- == 0)
		return (false);
	j = 0;
	while (i >= 0)
	{
		if (cmd[i] != escape)
			break ;
		j++;
		i--;
	}
	if (j % 2 != 0)
		return (true);
	return (false);
}
