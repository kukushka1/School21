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
