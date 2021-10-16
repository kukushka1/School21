/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:21:15 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:21:17 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*buf, size_t	count)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = (unsigned char *)buf;
	while (i < count)
	{
		buffer[i] = '\0';
		++i;
	}
	buf = buffer;
}
