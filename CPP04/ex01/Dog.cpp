#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "A new dog is born!" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "A dog is dead" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &copy) : brain(new Brain(*copy.brain))
{
	std::cout << "Dog is copied!" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	delete this->brain;
	this->brain = new Brain(*copy.brain);
	return (*this);
}