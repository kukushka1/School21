/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:24:28 by myuriko           #+#    #+#             */
/*   Updated: 2022/01/07 19:34:13 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_str_conv(va_list args, int *printed, int *index)
{
	char	*str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*printed += 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		*printed += ft_strlen(str);
	}
	++(*index);
}
