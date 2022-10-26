/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:59:24 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:59:25 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

enum e_level
{
	error = 1,
	warning,
	info,
	debug
};

Harl::Harl(void){this->level = 0;}
Harl::~Harl(void){}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon \
costs more money. You didn’t put enough bacon in my burger! If you did, I \
wouldn’t be asking for more!"
	<< std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some \
extra bacon for free. I’ve been coming for years whereas you started working \
here since last month."
	<< std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to \
speak to the manager now."
	<< std::endl;
}

static int		getLevelID(std::string level)
{
	if (level.compare("DEBUG") == 0)
		return (debug);
	else if (level.compare("INFO") == 0)
		return (info);
	else if (level.compare("WARNING") == 0)
		return (warning);
	else if (level.compare("ERROR") == 0)
		return (error);
	return (-1);
}

void	Harl::setLevel(std::string level)
{
	this->level = getLevelID(level);
	if (this->level < 0 )
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f)(void);

	void	(Harl::*funcs[])(void) = {
	 	&Harl::error,
		&Harl::warning,
		&Harl::info,
		&Harl::debug
	};
	std::string	levels[] = {
		"error",
		"warning",
		"info",
		"debug"
	};
	for (int i = 0; i < this->level; i++)
	{
		if (level == levels[i])
		{
			 f = funcs[i];
			(this->*f)();
		}
	}
}
