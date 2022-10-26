/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:56:17 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 19:00:15 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	this->name = "NoName";
	std::cout << "Cat: default constructor called." << std::endl;
}

Cat::Cat(std::string name): Animal("Cat")
{
	this->name = name;
	std::cout << "Cat: Name constructor called. " << this->name << std::endl;
}

Cat::Cat(Cat const &inst): Animal("Cat")
{
	*this = inst;
	std::cout << "Cat: copy constructor called. " << this->name << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called." << std::endl;
}

Cat	&Cat::operator=(Cat const &inst)
{
	this->name = inst.name;
	std::cout << "Cat: default assignment called." << this->name << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat " << getName() << " Meow" << std::endl;
}

const std::string		&Cat::getName(void) const
{
	return (this->name);
}

std::ostream	&operator<<(std::ostream &out, const Cat &inst)
{
	return (out << "Cat: " << inst.getName() << std::endl);
}
