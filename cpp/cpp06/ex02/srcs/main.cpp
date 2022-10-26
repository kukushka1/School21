/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:25:24 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/26 16:25:24 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

Base *	generate( void )
{
	int random = rand() % 3;
	std::cout << "Generate... " << (random?(random==1?"B":"C"):"A") << std::endl;
	switch (random)
	{
		case 0:
			return (static_cast<Base*>(new A));
		case 1:
			return (static_cast<Base*>(new B));
		case 2:
			return (static_cast<Base*>(new C));
	}
	return NULL;
}

void	identify(Base * p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "A"; 
		return ;
	}

	if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "B"; 
		return ;
	}

	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "C"; 
		return ;
	}
}

void	identify(Base & p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A"; 
		return ;
	}
	catch(std::exception & e)
	{}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B"; 
		return ;
	}
	catch(std::exception & e)
	{}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C"; 
		return ;
	}
	catch(std::exception & e)
	{}
}

int	main(void)
{
	srand(time(NULL));
	Base * base = generate();
	if (base == NULL)
	{
		std::cerr << "Error.\n";
		return (1);
	}

	std::cout << "Identify with pointer: ";
	identify(base);
	std::cout << std::endl;

	std::cout << "Identify with reference: ";
	identify(*base);
	std::cout << std::endl;

	delete base;
	return (0);
}