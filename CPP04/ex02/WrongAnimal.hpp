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
	WrongAnimal(const WrongAnimal &animal);
	WrongAnimal &operator=(const WrongAnimal &animal);
	std::string	getType() const;
	virtual void	makeSound() const;
};

#endif