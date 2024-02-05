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