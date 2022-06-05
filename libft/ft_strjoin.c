/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:39:32 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/06 20:39:34 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*str;
	size_t			len_s1_and_s2;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	len_s1_and_s2 = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * len_s1_and_s2);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		++j;
	}
	str[i + j] = '\0';
	return ((char *)str);
}
