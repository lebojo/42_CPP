#ifndef Intern_HPP
# define Intern_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern& src);
	Intern& operator=(const Intern& rhs);

	AForm* makeForm(const std::string& formName, const std::string& target);
};

#endif