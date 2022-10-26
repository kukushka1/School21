/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:59:19 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:59:19 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	Harl;

	if (argc != 2)
	{
		std::cout << "Argument error: ./HarlFilter <level name>" << std::endl;
		return (1);
	}
	Harl.setLevel(std::string(argv[1]));
	Harl.complain("debug");
	Harl.complain("info");
	Harl.complain("warning");
	Harl.complain("error");
	return (0);
}
