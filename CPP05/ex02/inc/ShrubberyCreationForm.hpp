#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public virtual AForm
{

private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& newTarget);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif