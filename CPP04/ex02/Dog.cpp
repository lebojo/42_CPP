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

void Dog::makeSound() const
{
	Animal::makeSound();
}
