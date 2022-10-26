#include <iostream>

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type)
{
	this->setType(type);
	std::cout << "AAnimal: constructor called." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: destructor called." << std::endl;
}

void		AAnimal::setType(std::string type)
{
	this->type = type;
}

const std::string		&AAnimal::getType(void) const
{
	return (this->type);
}

std::ostream	&operator<<(std::ostream &out, const AAnimal &inst)
{
	return (out << inst.getType() << std::endl);
}
