/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:11:48 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 19:11:48 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->name = "NoName";
	this->brain = new Brain();
	std::cout << "Dog: default constructor called." << std::endl;
}

Dog::Dog(std::string name): Animal("Dog")
{
	this->name = name;
	this->brain = new Brain();
	std::cout << "Dog: Name constructor called. " << this->name << std::endl;
}

Dog::Dog(Dog const &inst): Animal("Dog")
{
	*this = inst;
	std::cout << "Dog: copy constructor called. " << this->name << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called." << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(Dog const &inst)
{
	this->name = inst.name;
	*this->brain = *inst.brain;
	std::cout << "Dog: default assignment called." << this->name << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog " << getName() << " Gav" << std::endl;
}

const std::string		&Dog::getName(void) const
{
	return (this->name);
}

std::ostream	&operator<<(std::ostream &out, const Dog &inst)
{
	return (out << "Dog: " << inst.getName() << std::endl);
}

std::string	&Dog::getIdea(int i)
{
	return (this->brain->getIdea(i));
}

void	Dog::setIdea(int i, std::string value)
{
	this->brain->setIdea(i, value);
}
