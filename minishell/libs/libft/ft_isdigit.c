/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:26:33 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:26:33 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Arguments:
int c - the code of the character to be checked.

Return value:
Nonzero values are returned if the checked character c falls within
the appropriate character class, otherwise zero is returned.

Description:
Checks if a character is a digit (0 through 9).
*/
int	ft_isdigit(int c)
{
	return (48 <= c && c <= 57);
}
