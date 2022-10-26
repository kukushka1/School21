/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_apply_handlers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:24:07 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 21:24:08 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_printf_apply_handlers(t_args *args, const char *ssi, va_list ap)
{
	if (ssi[ft_strlen(ssi) - 1] == 'c')
		ft_printf_c_handler(args, ssi, ap);
	else if (ssi[ft_strlen(ssi) - 1] == 's')
		ft_printf_s_handler(args, ssi, ap);
	else if (ssi[ft_strlen(ssi) - 1] == 'd' || ssi[ft_strlen(ssi) - 1] == 'i'
		|| ssi[ft_strlen(ssi) - 1] == 'u')
		ft_printf_diu_handler(args, ssi, ap);
	else if (ssi[ft_strlen(ssi) - 1] == 'p')
		ft_printf_p_handler(args, ssi, ap);
	else if (ssi[ft_strlen(ssi) - 1] == 'x' || ssi[ft_strlen(ssi) - 1] == 'X')
		ft_printf_xx_handler(args, ssi, ap);
	else if (ssi[ft_strlen(ssi) - 1] == '%')
		ft_printf_prc_handler(args, ssi, ap);
	else
		(*args).res = NULL;
}
