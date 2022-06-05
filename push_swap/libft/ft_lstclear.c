/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:51:19 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/06 22:51:21 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buf;
	t_list	*temp;

	buf = *lst;
	while (buf)
	{
		temp = buf->next;
		ft_lstdelone(buf, del);
		buf = temp;
	}
	*lst = NULL;
}
