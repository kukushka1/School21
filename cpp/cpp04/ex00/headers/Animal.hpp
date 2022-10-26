/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:56:00 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 18:56:01 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP
# define UINT unsigned int
# include <iostream>
# include <string>

class Animal
{
protected:
	std::string		type;

public:
	Animal();
	Animal(std::string name);
	Animal(Animal const &inst);
	virtual ~Animal();

	Animal 		&operator=(Animal const &inst);

	const std::string	&getType(void) const;
	virtual void		makeSound(void) const;
};

std::ostream			&operator<<(std::ostream &out, const Animal &inst);

#endif
