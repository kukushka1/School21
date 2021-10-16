/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:22:47 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:22:49 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*buf, int	ch, size_t	count)
{
	size_t				i;
	unsigned char		*buffer;

	i = 0;
	buffer = (unsigned char *)buf;
	while (i < count)
	{
		buffer[i] = ch;
		++i;
	}
	return (buf = buffer);
}
