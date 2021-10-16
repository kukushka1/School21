/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:52:01 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/06 22:52:02 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*buf;

	buf = (t_list *)malloc(sizeof(t_list));
	if (!buf)
		return (buf = NULL);
	buf->next = NULL;
	buf->content = content;
	return (buf);
}
