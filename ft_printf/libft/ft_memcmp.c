/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:22:27 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:22:29 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*buf1,
	const void	*buf2, size_t	count)
{
	size_t					i;
	const unsigned char		*s1;
	const unsigned char		*s2;

	s1 = (const unsigned char *)buf1;
	s2 = (const unsigned char *)buf2;
	i = 0;
	while (i < count)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}
