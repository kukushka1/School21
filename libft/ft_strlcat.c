/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:23:13 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:23:15 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest,
	const char	*src, size_t	count)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;
	size_t	j;

	if (!dest || !src)
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	i = len_dest;
	j = 0;
	if (!count)
		return (len_src);
	if (count < len_dest)
		return (len_src + count);
	while (src[j] != '\0' && len_dest + j < count - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len_src + len_dest);
}
