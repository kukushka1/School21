/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:12:01 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:12:01 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	int		i;
	Zombie	*zh;

	zh = new Zombie[n];
	i = 0;
	while (i < n)
		zh[i++].setName(name);
	return (zh);
}
