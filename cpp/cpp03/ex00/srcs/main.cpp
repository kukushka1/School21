/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:22:14 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 18:22:14 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap kuznetsov("Kuznetsov");

	kuznetsov.attack("cppmodule3");
	kuznetsov.takeDamage(6);
	kuznetsov.beRepaired(3);
	kuznetsov.takeDamage(3);
	kuznetsov.beRepaired(8);
	kuznetsov.takeDamage(17);
    kuznetsov.beRepaired(112); //died..
    kuznetsov.takeDamage(15); // died..
	return (0);
}
