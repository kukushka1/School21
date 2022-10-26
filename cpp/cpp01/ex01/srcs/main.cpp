/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:11:55 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:11:55 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int main(void)
{
	int		i;
	Zombie	*zh;

	zh = zombieHorde(10, "BAZZZ");
	i = 0;
	while (i < 10)
	{
		std::cout << "zombie[" << i << "] ";
		zh[i++].announce();
	}
	delete[] zh;
	return (0);
}
