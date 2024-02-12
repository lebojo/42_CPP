#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "A new Wrongcat is born!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A cat is dead" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	std::cout << "Copy constructor called (WrongCat)" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const&  rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Assignation operator called (WrongCat)" << std::endl;
	return *this;
}