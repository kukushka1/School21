/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:23:56 by myuriko           #+#    #+#             */
/*   Updated: 2022/01/07 19:32:33 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_char_conv(va_list args, int *printed, int *index)
{
	unsigned char	digit;

	digit = va_arg(args, int);
	ft_putchar_fd(digit, 1);
	++(*index);
	++(*printed);
}
