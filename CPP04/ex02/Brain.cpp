#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain was created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A brain was destroyed" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain is copied!" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}