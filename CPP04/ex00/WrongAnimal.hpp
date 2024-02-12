#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal&	operator=(WrongAnimal const& rhs);
	std::string	getType() const;
	virtual void	makeSound() const;
};

#endif