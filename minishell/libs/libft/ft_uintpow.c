/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintpow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:29:31 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:29:32 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ulli	ft_uintpow(int nb, int pow)
{
	t_ulli	i;
	t_ulli	res;

	i = 1;
	res = nb;
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	if (pow == 1)
		return (nb);
	while (i < (t_ulli)pow)
	{
		res *= nb;
		i++;
	}
	return (res);
}
