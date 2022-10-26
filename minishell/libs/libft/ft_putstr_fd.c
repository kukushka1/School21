/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:45 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:27:46 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
s is a pointer to the string to write.
fd is the file descriptor number to write.

Description:
The function writes the given string s to a file with descriptor fd.
*/
void	ft_putstr_fd(const char *s, int fd)
{
	if (s != NULL)
		(void)(write(fd, s, ft_strlen(s)) + 1);
}
