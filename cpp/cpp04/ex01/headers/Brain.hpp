/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:11:27 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 19:11:27 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
protected:
	std::string		ideas[100];

public:
	Brain();
	Brain(Brain const &inst);
	virtual ~Brain();

	Brain 		&operator=(Brain const &inst);
	std::string	&getIdea(int i);
	void		setIdea(int i, std::string &value);
};

#endif
