/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:15:59 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/24 17:15:59 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
protected:
	std::string	name;
	int			grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &inst);
	virtual ~Bureaucrat();
	Bureaucrat			&operator=(Bureaucrat const &inst);

	const std::string	&getName(void) const;
	const int			&getGrade(void) const;
	void				incGrade(unsigned int value);
	void				decGrade(unsigned int value);

	void				signForm(Form &inst);

	class GradeTooHighException: public std::runtime_error
	{
	public:
		GradeTooHighException(void): runtime_error("Grade to high"){};
	};
	class GradeTooLowException: public std::runtime_error
	{
	public:
		GradeTooLowException(void): runtime_error("Grade to low"){};
	};
};

std::ostream			&operator<<(std::ostream &out, Bureaucrat const &inst);
