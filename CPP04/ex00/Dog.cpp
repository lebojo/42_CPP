#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "A new dog is born!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A dog is dead" << std::endl;
}
