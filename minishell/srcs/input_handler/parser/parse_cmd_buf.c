/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cmd_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:53:59 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:54:00 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bool.h"
#include "builtins.h"
#include "input_handler.h"

inline int	do_drop_buf(char **res, char *buf, int *j)
{
	char	*tmp;

	tmp = *res;
	*res = ft_strjoin(*res, buf);
	free(tmp);
	*j = 0;
	buf[0] = 0;
	if (*res == NULL)
		return (unsuccess);
	return (success);
}

inline int	do_update_buf(char **res, char *str, char *buf, int *j)
{
	int	i;

	if (str == NULL)
		return (unsuccess);
	if (*j == BUF_SIZE)
		if (do_drop_buf(res, buf, j) == unsuccess)
			return (unsuccess);
	i = 0;
	while (str[i])
	{
		buf[(*j)++] = str[i++];
		buf[*j] = 0;
		if (*j == BUF_SIZE)
			if (do_drop_buf(res, buf, j) == unsuccess)
				return (unsuccess);
	}
	return (success);
}
