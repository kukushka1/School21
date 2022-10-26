/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:02:38 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/26 18:02:38 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<template<typename, typename> class T>
int	easyfind(T<int, std::allocator<int> > &arr, int i)
{
	typename T<int, std::allocator<int> >::iterator it;

	it = std::find(arr.begin(), arr.end(), i);
	if (it == arr.end())
		return (-1);
	return (std::distance(arr.begin(), it));
}
