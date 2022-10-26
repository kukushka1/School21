/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:08:03 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/26 17:33:29 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <stdexcept>

template <typename T>
class Array
{
	private:
		T	*m_array;
		int	m_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &toCopy);
		~Array(void);
		
		Array &operator = (Array const &toCopy);
		T &operator [] (const int &i) const;

		int size(void) const;

		class IndexOutOfBounds : public std::exception
		{
			public:
				const char* what() const throw();
		};

};

#include "Array.tpp"
#endif
