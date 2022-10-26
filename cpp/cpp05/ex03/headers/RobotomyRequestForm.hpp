/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:35:50 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/24 18:35:51 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <cstdlib>

# include "AForm.hpp"

class	Bureaucrat;

class RobotomyRequestForm : virtual public AForm
{
public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &inst);
		virtual ~RobotomyRequestForm();

		void		execute(Bureaucrat const &executor) const;
};

#endif
