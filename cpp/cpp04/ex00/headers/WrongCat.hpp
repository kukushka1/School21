/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:56:12 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 18:56:12 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP
# define UINT unsigned int
# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
protected:
	std::string		name;

public:
	WrongCat();
	WrongCat(std::string name);
	WrongCat(WrongCat const &inst);
	~WrongCat();

	WrongCat 			&operator=(WrongCat const &inst);

	const std::string	&getName(void) const;
	void				makeSound(void) const;
};

std::ostream			&operator<<(std::ostream &out, const WrongCat &inst);

#endif
