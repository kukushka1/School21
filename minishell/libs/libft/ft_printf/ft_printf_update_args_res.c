/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_update_args_res.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:24:46 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:24:46 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

inline void	ft_printf_update_args_res(t_args *args, const char *s, int code)
{
	(void)code;
	(*args).res = ft_memmove(
			(char *)ft_calloc((*args).len, sizeof(char)),
			(*args).res, (*args).old_len);
	ft_memmove((*args).res + (*args).old_len, s,
		(*args).len - (*args).old_len);
}
