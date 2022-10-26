/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_redirects_builtin.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:52:26 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:52:27 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "bool.h"
#include "actions_handler.h"

inline int	do_redirects_builtin(t_action action)
{
	int	fd;

	fd = unsuccess;
	if (action.redirect_out.type == output
		|| action.redirect_out.type == output_append)
	{
		if (action.redirect_out.target == NULL)
			fd = action.pipe_out;
		else if (action.redirect_out.target)
			fd = get_redirect_fd(action.redirect_out);
	}
	return (fd);
}
