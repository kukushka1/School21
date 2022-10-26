/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:56:09 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 18:56:10 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP
# define UINT unsigned int
# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string		type;

public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(WrongAnimal const &inst);
	virtual ~WrongAnimal();

	WrongAnimal 		&operator=(WrongAnimal const &inst);

	const std::string	&getType(void) const;
	void				makeSound(void) const;
};

std::ostream			&operator<<(std::ostream &out, const WrongAnimal &inst);

#endif
