/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:22:00 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/05 23:22:01 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int	c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
