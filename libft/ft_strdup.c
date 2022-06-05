/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:23:07 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:23:09 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*str)
{
	char	*buf;
	size_t	len;

	len = ft_strlen(str) + 1;
	buf = malloc(sizeof(char) * len);
	if (!buf)
		return (0);
	buf = ft_memcpy(buf, str, len);
	return (buf);
}
