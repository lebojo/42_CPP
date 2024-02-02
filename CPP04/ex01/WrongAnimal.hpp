#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

using std::string;

class WrongAnimal {
protected:
	string type;
public:
	WrongAnimal();
	~WrongAnimal();
	string	getType() const;
	virtual void	makeSound() const;
};

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
};
#endif