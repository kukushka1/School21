/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:22:40 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:22:42 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest,
	const void	*src, size_t	count)
{
	char	*buffer_dest;
	char	*buffer_src;

	buffer_dest = (char *)dest;
	buffer_src = (char *)src;
	if (dest == src)
		return (dest);
	if (buffer_src < buffer_dest)
	{
		while (count--)
			*(buffer_dest + count) = *(buffer_src + count);
		return (dest);
	}
	while (count--)
		*buffer_dest++ = *buffer_src++;
	return (dest);
}
