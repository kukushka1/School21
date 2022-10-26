/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:37:39 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 18:37:40 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called\n";
    name = "[Frag Default]";
    points_hit = 100;
    points_energy = 100;
    damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap name constructor called\n";
    this->name = name;
    points_hit = 100;
    points_energy = 100;
    damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap()
{
    std::cout << "FragTrap Copy constructor called\n";
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap Copy assignment operator called\n";
    name = src.getName();
    points_hit = src.getHit();
    points_energy = src.getEnergy();
    damage = src.getDamage();
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " says: Never gonna give you up, never gonna let you down...\n";
}