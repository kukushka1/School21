/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:22:34 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:22:36 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	count)
{
	unsigned char		*buffer_dest;
	const unsigned char	*buffer_src;

	if ((dest == src) || count <= 0)
		return (dest);
	if (!dest && !src)
		return (0);
	buffer_dest = (unsigned char *)dest;
	buffer_src = (const unsigned char *)src;
	while (count--)
		buffer_dest[count] = buffer_src[count];
	return (dest = buffer_dest);
}
