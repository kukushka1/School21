/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:28:55 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:28:55 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
str is a pointer to the string to be searched.
c - the code of the required character.

Return value:
Pointer to the desired character, if found in str, otherwise NULL.

Description:
The function searches for the first occurrence from the END of the string of the
character whose code is specified in argument c, on the line pointed to by str.
*/
char	*ft_strrchr(const char *str, int c)
{
	size_t	index;

	if (str == NULL)
		return (NULL);
	index = ft_strlen(str);
	if (c == 0)
		return ((char *)(str + index));
	while (index--)
	{
		if (str[index] == (char)c)
			return ((char *)(str + index));
	}
	return (NULL);
}
