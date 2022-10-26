/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:36:31 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/24 18:36:32 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAFORM_HPP
# define AAFORM_HPP
# include <stdexcept>
# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	const std::string	target;
	bool				is_signed;
	const int			grade_to_sign;
	const int			grade_to_execute;

	static int			checkGrade(int value);

public:
	AForm(std::string name, std::string target, int grade_to_sign,
		int grade_to_execute);
	AForm(AForm const &inst);
	virtual ~AForm(void);

	const std::string	&getName(void) const;
	const std::string	&getTarget(void) const;
	const bool			&getIsSigned(void) const;
	const int			&getGradeToSign(void) const;
	const int			&getGradeToExecute(void) const;
	void				setIsSigned(bool value);

	void				beSigned(Bureaucrat &inst);
	void				beExecuted(Bureaucrat const &inst) const;
	virtual void		execute(Bureaucrat const &executor) const = 0;

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
	class AFormNotSignedException: public std::runtime_error
	{
	public:
		AFormNotSignedException(void): runtime_error("Form not signed"){};
	};
};

std::ostream	&operator<<(std::ostream &out, AForm const &inst);

#endif
