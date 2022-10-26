/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:26:20 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:26:21 by myuriko          ###   ########.fr       */
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
Checks a character to be a text character; the call is equivalent
(isalpha (c) || isdigit (c)).
*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
