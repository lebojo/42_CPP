#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "A new animal is born!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An animal is dead" << std::endl;
}

std::std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	if (this->type == "Dog")
		std::cout << "Woof woof" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Meow meow" << std::endl;
	else
		std::cout << "Animal sound" << std::endl;
}

Animal&	Animal::operator=(Animal const&  rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Assignation operator called (Animal)" << std::endl;
	return *this;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Copy constructor called (Animal)" << std::endl;
	return ;
}
