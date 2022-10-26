/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_strs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:50 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:27:50 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
strs - pointer to strings array to needed to sort.

Description:
The function sorts the strings in the passed array * strs in alphabetical order.

*/
void	ft_sort_strs(char ***strs)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (strs && (*strs)[i] != NULL && (*strs)[0] != NULL)
	{
		j = i;
		while (j > 0 && ft_strcmp((*strs)[j - 1], (*strs)[j]) > 0)
		{
			tmp = (*strs)[j - 1];
			(*strs)[j - 1] = (*strs)[j];
			(*strs)[j] = tmp;
			j--;
		}
		i++;
	}
}
