#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A new animal is born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An animal is dead" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const&  rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Assignation operator called (WrongAnimal)" << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	if (this->type == "WrongCat")
		std::cout << "Bloup Bloup" << std::endl;
	else
		std::cout << "Animal sound" << std::endl;
}