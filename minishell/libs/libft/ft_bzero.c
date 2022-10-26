/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:26:02 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:26:02 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
buf is a pointer to the memory area to be filled.
l is the size of buf.

Returned values:
The function does not return a value.

Description:
The function fills the first l bytes of the area starting with buf with zeros
(bytes, containing '\\ 0').
This function is deprecated (marked DEPRECATED in POSIX.1-2001): new
programs should use memset (3). POSIX.1-2008 definition of bzero ()
removed.
*/
void	ft_bzero(void *buf, size_t l)
{
	char	*s;

	s = (char *)buf;
	while (l--)
	{
		*s++ = '\0';
	}
}
