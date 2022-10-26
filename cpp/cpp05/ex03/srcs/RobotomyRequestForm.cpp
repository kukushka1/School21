/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:35:41 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/24 18:35:41 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	AForm("RobotomyRequestForm", target, 72, 45){srand(time(NULL));};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &inst):
	AForm(inst.getName(), inst.getTarget(), inst.getGradeToSign(),
		inst.getGradeToExecute())
{
	this->setIsSigned(inst.getIsSigned());
}

RobotomyRequestForm::~RobotomyRequestForm(){};

void		RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		this->beExecuted(executor);
		std::cout << "Vvvvvvvrrrrr...vvvvrrr...VVVvvvrrrr...VvvVvvrr..."
			<< std::endl;
		if((1 + (rand() % 3)) == 2)
			std::cout << this->getTarget() << " was robotomized!" << std::endl;
		else
			std::cout << "The robotization failed..." << std::endl;

	}
	catch(const AForm::AFormNotSignedException& e)
	{
		throw e;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		throw e;
	}
}
