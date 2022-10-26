/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:25:11 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:25:12 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
Arguments:
lst is a pointer to a pointer to the first item in the list.
new - a pointer to a new list item to be added.

Returned value:
Not.

Description:
The function gets the first element of the passed list lst and adds before it
new element new.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst != NULL && new != NULL)
		{
			new->next = *lst;
			*lst = new;
		}
		else
		{
			if (*lst == NULL && new != NULL)
				*lst = new;
			if (*lst != NULL && new == NULL)
			{
				new = (t_list *)ft_calloc(1, sizeof(t_list));
				new->next = *lst;
				*lst = new;
			}
		}
	}
}
