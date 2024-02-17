#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "A new cat is born!" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "A cat is dead" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &copy) : brain(new Brain(*copy.brain))
{
	std::cout << "Cat is copied!" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	delete this->brain;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

void Cat::makeSound() const
{
	Animal::makeSound();
}