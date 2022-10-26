/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:29:25 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:29:26 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
int c - character code to be converted to upper case.

Return value:
Returns the uppercase equivalent of c if
c is a lowercase letter. Otherwise, c is returned unchanged.

Description:
Checks if a character is a letter, if so, converts to uppercase.
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
