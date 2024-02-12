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
	std::string	getType() const;
	virtual void	makeSound() const;
};

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
};
#endif