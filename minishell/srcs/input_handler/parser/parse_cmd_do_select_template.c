/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cmd_do_select_template.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:54:17 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:54:18 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "input_handler.h"

inline void	do_select_template(char *res, t_select *args)
{
	if (*res == asterisk && ft_strlen(res) == 1)
		args->direction = single_asterisk;
	else if (*res == asterisk && res[ft_strlen(res) - 1] == asterisk)
		args->direction = all_inn_all;
	else if (*res == asterisk && ft_strchr(res + 1, asterisk) == NULL)
		args->direction = only_end;
	else if (res[ft_strlen(res) - 1] == asterisk
		&& ft_strchr(res, asterisk) == res + (ft_strlen(res) - 1))
		args->direction = only_start;
	else if (*res == asterisk)
		args->direction = all_end;
	else if (res[ft_strlen(res) - 1] == asterisk)
		args->direction = start_all;
	else
		args->direction = start_all_end;
}
