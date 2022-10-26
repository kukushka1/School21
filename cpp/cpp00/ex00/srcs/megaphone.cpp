/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:42:23 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 12:49:39 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void megaphone (int argc, char **argv) 
{
	int		i;
	int		j;

	j = -1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv && argv[++j])
	{
		i = -1;
		while (j > 0 && argv[j][++i])
			std::cout << (char)std::toupper(argv[j][i]);
	}
	std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    megaphone(argc, argv);
    return 0;
}