/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:14:05 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:14:06 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	Weapon::setType("Undefined");
}

Weapon::Weapon(std::string type)
{
	Weapon::setType(type);
}

Weapon::~Weapon()
{
	std::cout << this->getType() << ": destroyed" << std::endl;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}
void	Weapon::setType(std::string type)
{
	this->type = type;
}
