/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:51:05 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/06 22:51:07 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buf;

	buf = *lst;
	if (buf == ((void *)0))
		*lst = new;
	else
	{
		while (buf->next)
			buf = buf->next;
		buf->next = new;
	}
}
