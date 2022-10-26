/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:28:59 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:29:00 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtolower(char **str)
{
	char	*s;

	if (str == NULL || *str == NULL)
		return ;
	s = *str;
	while (*s != 0)
	{
		*s = ft_tolower(*s);
		s++;
	}
}
