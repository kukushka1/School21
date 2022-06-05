/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:23:19 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:23:20 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest,
	const char	*src, size_t	count)
{
	size_t	len_src;
	size_t	i;

	if (!dest || !src)
		return (0);
	len_src = ft_strlen(src);
	i = 0;
	if (!count)
		return (len_src);
	while (src[i] != '\0' && i < count - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (len_src);
}
