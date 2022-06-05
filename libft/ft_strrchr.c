/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:23:57 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:23:59 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int	c)
{
	char	*buf;
	char	*res;

	buf = (char *)str;
	res = NULL;
	if (c == '\0')
	{
		res = buf + ft_strlen(buf);
		return (res);
	}	
	while (*buf)
	{
		if (*buf == (char)c)
			res = buf;
		buf++;
	}
	return (res);
}
