/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:34:27 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/26 17:34:28 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T const *arr, unsigned int const &size, void (*f)(T const &i))
{
	unsigned int	i;

	i = 0;
	while (i < size)
		f(arr[i++]);
}
