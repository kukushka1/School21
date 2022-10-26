/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:02:41 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/26 18:02:41 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <algorithm>

template< template<typename, typename> class T>
int	easyfind(T<int, std::allocator<int> > &arr, int i);

# include "easyfind.tpp"
#endif
