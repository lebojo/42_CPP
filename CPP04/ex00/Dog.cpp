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

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Copy constructor called (Dog)" << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const&  rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Assignation operator called (Dog)" << std::endl;
	return *this;
}