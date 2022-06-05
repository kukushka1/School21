/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:39:52 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/06 20:39:54 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*buf;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		buf = ft_strdup("");
		if (!(buf))
			return (NULL);
		else
			return (buf);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	buf = ft_substr(s1, start, end - start);
	return (buf);
}
