/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:13:42 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:13:42 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(void);
	Weapon(std::string	type);
	~Weapon(void);
	const std::string	&getType(void);
	void				setType(std::string type);
};

#endif
