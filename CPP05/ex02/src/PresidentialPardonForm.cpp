#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("default")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& newTarget): AForm("PresidentialPardonForm", 25, 5), target(newTarget)
{
	std::cout << "PresidentialPardonForm parameterized constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src): AForm(src), target(src.target)
{
	*this = src;
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}