#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A new WrongAnimal is born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An WrongAnimal is dead" << std::endl;
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

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	this->type = animal.type;
	return (*this);
}