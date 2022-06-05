/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:38:28 by myuriko           #+#    #+#             */
/*   Updated: 2021/10/06 20:38:30 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digits(int number)
{
	int	digit_count;

	digit_count = 1;
	number /= 10;
	while (number)
	{
		digit_count++;
		number /= 10;
	}
	return (digit_count);
}

static unsigned int	count_chars(int number)
{
	if (number >= 0)
		return (count_digits(number));
	return (count_digits(number) + 1);
}

static void	write_digits(char *string,
	unsigned int digit_count, unsigned int number, int is_negative)
{
	string[digit_count] = '\0';
	while (digit_count--)
	{
		string[digit_count] = '0' + (number % 10);
		number /= 10;
	}
	if (is_negative)
		string[0] = '-';
}

char	*ft_itoa(int n)
{
	unsigned int	digit_count;
	unsigned int	number;
	unsigned int	is_negative;
	char			*string;

	digit_count = count_chars(n);
	number = (unsigned int)n;
	is_negative = 0;
	if (n < 0)
	{
		number *= -1;
		is_negative = 1;
	}
	string = malloc(sizeof(char) * (digit_count + 1));
	if (string == NULL)
		return (NULL);
	write_digits(string, digit_count, number, is_negative);
	return (string);
}
