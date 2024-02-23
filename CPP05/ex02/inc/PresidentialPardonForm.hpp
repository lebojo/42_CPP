#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public virtual AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& newTarget);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);

	void execute(const Bureaucrat& executor) const;
};

#endif