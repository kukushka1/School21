/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:23:35 by myuriko           #+#    #+#             */
/*   Updated: 2022/01/09 15:03:37 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int		ft_unsigned_int(va_list args, int *printed, int *index);

int		ft_int_conv(va_list args, int *printed, int *index);

void	ft_char_conv(va_list args, int *printed, int *index);

void	ft_str_conv(va_list args, int *printed, int *index);

int		ft_hexa_conv(va_list args, char to_conv, int *printed, int *index);

char	*ft_itexa(unsigned long int num, char to_conver);

int		ft_count_unsign(unsigned long int number);
#endif
