/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:22:11 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 18:22:11 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
    name = "[Default]";
    points_hit = 10;
    points_energy = 10;
    damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called\n";
    this->name = name;
    points_hit = 10;
    points_energy = 10;
    damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignment operator called\n";
    name = src.getName();
    points_hit = src.getHit();
    points_energy = src.getEnergy();
    damage = src.getDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

void ClapTrap::setDamage(unsigned int damage)
{
    this->damage = damage;
}

std::string ClapTrap::getName() const
{
    return (name);
}

unsigned int ClapTrap::getHit() const
{
    return (points_hit);
}

unsigned int ClapTrap::getEnergy() const
{
    return (points_energy);
}

unsigned int ClapTrap::getDamage() const
{
    return (damage);
}

void ClapTrap::attack(const std::string& target)
{
    if (getHit() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " died...\n";
        return ;
    }
    if (getEnergy() == 0)
    {
        std::cout << "ClapTrap " << getName() << " have not enough energy!\n";
        return ;
    }
    points_energy--;
    std::cout << "ClapTrap " << getName() << " attacks " << target << \
    ", causing " << getDamage() << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHit() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " died...\n";
        return ;
    }
    if (getHit() <= amount)
    {
        points_hit = 0;
        std::cout << "ClapTrap " << getName() << " take " << amount << \
    " points of damage and is dead now!\n";
    }
    else
    {
        points_hit -= amount;
        std::cout << "ClapTrap " << getName() << " take " << amount << \
    " points of damage! Now have " << getHit() << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getHit() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " died...\n";
        return ;
    }
    if (getEnergy() == 0)
    {
        std::cout << "ClapTrap " << getName() << " have not enough energy!\n";
        return ;
    }
    points_hit += amount;
    std::cout << "ClapTrap " << getName() << " got repaired " << amount << \
    " points! Now have " << getHit() << std::endl;
    points_energy--;
}
