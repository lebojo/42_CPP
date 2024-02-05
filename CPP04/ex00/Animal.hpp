#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

using std::string;

class Animal {
protected:
	string type;
public:
	Animal();
	~Animal();
	string	getType() const;
	virtual void	makeSound() const;
};

#endif