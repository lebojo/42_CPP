#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A new animal is born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An animal is dead" << std::endl;
}

string WrongAnimal::getType() const
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


WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "A new Wrongcat is born!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A cat is dead" << std::endl;
}