#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "A new cat is born!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A cat is dead" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Copy constructor called (Cat)" << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const&  rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Assignation operator called (Cat)" << std::endl;
	return *this;
}