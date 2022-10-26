/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:35:03 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/26 16:35:04 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const	&max(T const &a, T const &b)
{
	return (a >= b ? a : b);
}

template<typename T>
T const	&min(T const &a, T const &b)
{
	return (a <= b ? a : b);
}
