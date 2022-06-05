/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:23:46 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:23:48 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,
	const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*buf;

	i = 0;
	buf = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (buf);
	while (buf[i] != '\0' && i < len)
	{
		c = 0;
		while (buf[i + c] != '\0' && little[c] != '\0'
			&& buf[i + c] == little[c] && i + c < len)
			c++;
		if (c == n_len)
			return (buf + i);
		i++;
	}
	return (0);
}
