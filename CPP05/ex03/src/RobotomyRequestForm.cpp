#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("default")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& newTarget): AForm("RobotomyRequestForm", 72, 45), target(newTarget)
{
	std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): AForm(src), target(src.target)
{
	*this = src;
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomization of " << target << " has failed" << std::endl;
}