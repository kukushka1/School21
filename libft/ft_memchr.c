/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:22:19 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:22:22 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	count)
{
	size_t			i;
	unsigned char	*str;

	i = -1;
	str = (unsigned char *)s;
	while (++i < count)
		if (str[i] == (unsigned char)c)
			return (&str[i]);
	return (NULL);
}
