/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:26:37 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:26:37 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
int c - the code of the character to be checked.

Return value:
Nonzero values are returned if the checked character c falls within
corresponding character class (codes 32 - 126)),
otherwise, zero is returned.

Description:
Checks if a character is printable (including space).
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
