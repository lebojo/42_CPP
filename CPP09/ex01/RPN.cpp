#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "RPN default constructor called" << std::endl;
}

RPN::~RPN()
{
	std::cout << "RPN destructor called" << std::endl;
}

RPN::RPN(const RPN& src)
{
	*this = src;
	std::cout << "RPN copy constructor called" << std::endl;
}

RPN& RPN::operator=(const RPN& rhs)
{
	if (this != &rhs)
	{
		//Don't forget to copy the attributes here
	}
	std::cout << "RPN assignment operator called" << std::endl;
	return *this;
}