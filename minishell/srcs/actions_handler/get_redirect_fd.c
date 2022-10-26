/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_redirect_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:52:39 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:52:39 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

#include "mesages.h"
#include "error_msgs.h"
#include "actions_handler.h"

inline int	get_redirect_fd(t_redirect redirect)
{
	int	fd;

	fd = -1;
	if (redirect.type == input)
		fd = open(redirect.target, O_RDONLY);
	else if (redirect.type == output)
		fd = open(redirect.target, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	else if (redirect.type == output_append)
		fd = open(redirect.target, O_WRONLY | O_APPEND | O_CREAT, 0664);
	else
	{
		printf(MSG_ERR_INVRDTYPE);
		return (fd);
	}
	if (fd < 0)
		perror(MSG_PROG_NAME);
	return (fd);
}
