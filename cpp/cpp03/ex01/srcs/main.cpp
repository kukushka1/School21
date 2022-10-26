/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:25:16 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 18:25:16 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

int	main(void)
{
	{
		ClapTrap	clap("clap_Kuznetsov");

		clap.attack("cppmodule3");
		clap.takeDamage(6);
		clap.beRepaired(4);
		clap.takeDamage(3);
		clap.beRepaired(8);
		clap.takeDamage(17);
	}
	std::cout << std::endl;
	{
		ScavTrap	scav("scav_Kuznetsov");

		scav.attack("cppmodule3");
		scav.takeDamage(6);
		scav.beRepaired(4);
		scav.takeDamage(3);
		scav.guardGate();
		scav.beRepaired(8);
		scav.takeDamage(17);
		scav.takeDamage(100);
		scav.beRepaired(8);
	}
	return (0);
}
