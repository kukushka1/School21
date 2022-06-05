/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:21:04 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:21:06 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	over_long(int neg)
{
	if (neg == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	number;
	int		neg;

	i = 0;
	number = 0;
	neg = 1;
	while (str[i] && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		++i;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg = -1;
		++i;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + (str[i] - 48);
		++i;
	}
	if (number > 9223372036854775807)
		number = over_long(neg);
	return ((int)number * neg);
}
