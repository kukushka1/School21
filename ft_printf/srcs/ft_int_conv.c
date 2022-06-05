/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:24:10 by myuriko           #+#    #+#             */
/*   Updated: 2022/01/07 19:34:38 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_unsign(unsigned long int number)
{
	int	is_digit;

	is_digit = 0;
	if (number == 0)
		++is_digit;
	while (number != 0)
	{
		number /= 10;
		++is_digit;
	}
	return (is_digit);
}

static char	*ft_untoa(unsigned int n)
{
	char				*num_str;
	size_t				dgt;
	unsigned long int	numb;

	numb = n;
	dgt = ft_count_unsign(n);
	num_str = (char *)malloc(sizeof(char) * (dgt + 1));
	if (!num_str)
		return (NULL);
	num_str[dgt] = '\0';
	while (dgt--)
	{
		num_str[dgt] = numb % 10 + '0';
		numb /= 10;
	}
	return (num_str);
}

int	ft_unsigned_int(va_list args, int *printed, int *index)
{
	int				my_return;
	unsigned int	number;
	char			*num;

	my_return = 0;
	number = va_arg(args, unsigned int);
	num = ft_untoa(number);
	if (num == NULL)
		return (-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	++(*index);
	return (my_return);
}

int	ft_int_conv(va_list args, int *printed, int *index)
{
	int		number;
	int		my_return;
	char	*num;

	my_return = 0;
	number = va_arg(args, int);
	num = ft_itoa(number);
	if (num == NULL)
		return (-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	++(*index);
	return (my_return);
}
