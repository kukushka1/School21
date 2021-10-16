/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:23:00 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:23:01 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str, int	c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	if (ch == '\0')
	{
		while (*str)
			++str;
		return ((char *) str);
	}
	while (*str)
	{
		if (*str == ch)
			return ((char *) str);
		++str;
	}
	return (NULL);
}
