#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
	std::std::string type;
public:
	Animal(Animal const & src);
	Animal&	operator=(Animal const& rhs);
	Animal();
	~Animal();
	std::std::string	getType() const;
	virtual void	makeSound() const;
};

#endif
