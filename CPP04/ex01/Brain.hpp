#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# define BRAIN_SIZE 100

class Brain
{
public:
	Brain();
	~Brain();
	std::string identify() const;
};

#endif