#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain was created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A brain was destroyed" << std::endl;
}

Brain::Brain(const Brain& src)
{
	*this = src;
	std::cout << "A brain was copied" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}
	std::cout << "A brain was assigned" << std::endl;
	return *this;
}