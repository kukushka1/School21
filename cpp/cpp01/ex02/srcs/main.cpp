/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:12:21 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:12:23 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str;
	std::string	*pstr;

	str = "HI THIS IS BRAIN";
	pstr = &str;
	std::string &rstr = str;
	std::cout << "addr  str: " << &str << " value: " << str << std::endl;
	std::cout << "addr pstr: " << &pstr << " value: " << *pstr << std::endl;
	std::cout << "addr rstr: " << &rstr << " value: " << rstr << std::endl;
	return (0);
}
