#ifndef AAnimal_HPP
# define AAnimal_HPP
# define UINT unsigned int
# include <iostream>
# include <string>

class AAnimal
{
protected:
	std::string		type;

public:
	AAnimal(std::string type);
	virtual ~AAnimal();


	void				setType(std::string type);
	const std::string	&getType(void) const;
	virtual void		makeSound(void) const = 0;
	virtual std::string	&getIdea(int i) = 0;
	virtual void		setIdea(int i, std::string value) = 0;
};

std::ostream			&operator<<(std::ostream &out, const AAnimal &inst);

#endif
