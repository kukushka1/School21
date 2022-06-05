/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:24:16 by myuriko           #+#    #+#             */
/*   Updated: 2022/01/07 19:43:00 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

typedef struct s_itexa
{
	char	*hexad;
	int		int_hex;
	int		len;
	int		conv_c;
	char	tmp;
}				t_itexa;

static void	hexa_reverse(t_itexa *ptr)
{
	int	index;

	index = 0;
	while (index < ((*ptr).len / 2))
	{
		(*ptr).tmp = (*ptr).hexad[index];
		(*ptr).hexad[index] = (*ptr).hexad[(*ptr).len - index - 1];
		(*ptr).hexad[(*ptr).len - index - 1] = (*ptr).tmp;
		++index;
	}
}

static void	hexa_change(t_itexa *ptr, unsigned long int *num)
{
	while (*num > 0)
	{
		(*ptr).int_hex = *num % 16;
		if ((*ptr).int_hex < 10)
			(*ptr).hexad[(*ptr).len] = (*ptr).int_hex + 48;
		else
			(*ptr).hexad[(*ptr).len] = (*ptr).int_hex + (*ptr).conv_c;
		*num /= 16;
		(*ptr).len++;
	}
}

char	*ft_itexa(unsigned long int num, char to_conver)
{
	t_itexa	convert;

	convert.len = ft_count_unsign(num);
	convert.hexad = (char *)malloc((convert.len + 1) * sizeof(char));
	if (!convert.hexad)
		return (NULL);
	if (to_conver == 'X')
		convert.conv_c = 55;
	else
		convert.conv_c = 87;
	if (num == 0)
	{
		convert.hexad[0] = '0';
		convert.hexad[1] = '\0';
		return (convert.hexad);
	}
	convert.len = 0;
	hexa_change(&convert, &num);
	convert.hexad[convert.len] = '\0';
	convert.len = ft_strlen(convert.hexad);
	hexa_reverse(&convert);
	return (convert.hexad);
}
