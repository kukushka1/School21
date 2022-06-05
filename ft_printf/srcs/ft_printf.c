/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:24:22 by myuriko           #+#    #+#             */
/*   Updated: 2022/01/07 19:33:33 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_no_percent(const char *format, int *index, int *printed)
{
	ft_putchar_fd(format[(*index)], 1);
	++(*index);
	++(*printed);
}

static int	ft_percent(const char *format, int *ind, va_list args, int *prntd)
{
	int	my_return;

	my_return = 0;
	if (format[(*ind)] == 'd' || format[(*ind)] == 'i')
		my_return = ft_int_conv(args, prntd, ind);
	else if (format[(*ind)] == 'u')
		my_return = ft_unsigned_int(args, prntd, ind);
	else if (format[(*ind)] == 'c')
		ft_char_conv(args, prntd, ind);
	else if (format[(*ind)] == 'x' || format[(*ind)] == 'X'
		|| format[(*ind)] == 'p')
		my_return = ft_hexa_conv(args, format[(*ind)], prntd, ind);
	else if (format[(*ind)] == 's')
		ft_str_conv(args, prntd, ind);
	else
	{
		ft_putchar_fd(format[(*ind)], 1);
		++(*ind);
		++(*prntd);
	}
	return (my_return);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		my_return;
	int		index;
	int		printed;

	va_start(args, format);
	if (!format)
		return (-1);
	my_return = 0;
	index = 0;
	printed = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			my_return = ft_percent(format, &index, args, &printed);
			if (my_return == -1)
				return (my_return);
		}
		else
			ft_no_percent(format, &index, &printed);
	}
	va_end(args);
	return (printed);
}
