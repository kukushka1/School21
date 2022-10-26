/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:28:02 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:28:03 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
s1, s2 - pointers to compared strings.

Returned value:
0 - if some string is NULL.

A positive number - if there are differences of the compared strings and the
code of the first different character in string s1 is greater than the code
of the character by the same positions in string s2.

Negative number - there are differences and a code of the compared strings the
first different character in string s1 is less than the character code on the
same positions in string s2.

If both compared strings ended, and there were no differences, then the
comparison stops and zero is returned.

*/
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
		i++;
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	return (s1[i] - s2[i]);
}
