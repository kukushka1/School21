/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:31 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:27:32 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
c - character code for writing.
fd is the file descriptor number to write.

Description:
The function writes the committed character c to file with descriptor fd.
*/
void	ft_putchar_fd(const char c, int fd)
{
	(void)(write(fd, &c, 1) + 1);
}
