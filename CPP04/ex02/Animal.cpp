#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "A new animal is born!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An animal is dead" << std::endl;
}

std::string Animal::getType() const
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

Animal::Animal(const Animal& src)
{
	*this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}