/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:25 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:27:26 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
buf is a pointer to the array to be filled.
c - character code for filling.
l - the size of the filled part of the array in bytes.

Return value:
The function returns a pointer to the buf array to be filled.

Description:
The function fills the first l bytes of the memory area pointed to by the
argument buf, the character specified by the c argument. If buf points to
NULL - the function will return NULL.
*/
void	*ft_memset(void *buf, int c, size_t l)
{
	unsigned char	*buf_tmp;

	if (!buf)
		return (NULL);
	buf_tmp = (unsigned char *)buf;
	while (l--)
	{
		*buf_tmp++ = (unsigned char)c;
	}
	return (buf);
}
