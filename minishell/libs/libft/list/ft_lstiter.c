/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:25:27 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:25:27 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libft.h"

/*
Arguments:
lst is a pointer to a list item.
f - pointer to the function for processing the content field of the list item.

Returned value:
Not.

Description:
The function gets an element of the passed list lst and applies to its field
content function f. The function processes all descendants of the lst list
element so far will not make it to the end of the list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst && f)
	{
		tmp = lst;
		while (tmp)
		{
			f(tmp->content);
			tmp = tmp->next;
		}
	}
}
