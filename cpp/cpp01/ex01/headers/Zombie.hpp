/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:11:51 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:11:52 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string name);
	void	setName(std::string name);
	void	announce(void);
	~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif
