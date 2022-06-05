/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:24:05 by myuriko           #+#    #+#             */
/*   Updated: 2022/01/07 19:37:33 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	hexa_to_p(int *printed)
{	
	ft_putstr_fd("0x", 1);
	*printed += 2;
}

int	ft_hexa_conv(va_list args, char to_conv, int *printed, int *index)
{
	char	*hexa;
	char	case_char;

	if (to_conv == 'x' || to_conv == 'X')
	{
		case_char = to_conv;
		hexa = ft_itexa(va_arg(args, unsigned int), case_char);
		if (hexa == NULL)
			return (-1);
	}
	else
	{
		case_char = 'x';
		hexa = ft_itexa(va_arg(args, unsigned long int), case_char);
		if (hexa == NULL)
			return (-1);
	}
	if (to_conv == 'p')
		hexa_to_p(printed);
	ft_putstr_fd(hexa, 1);
	*printed += ft_strlen(hexa);
	free(hexa);
	++(*index);
	return (0);
}
