#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "A new form was created (" << this->name << ")" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destroyed (" << this->name << ") :(" << std::endl;
}

const std::string Form::getName() const
{
	return (this->name);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getExecGrade() const
{
	return (this->execGrade);
}

bool Form::getSignStatus() const
{
	return (this->signStatus);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getName() << ", to sign it you must be at least:" << form.getSignGrade() << " and for exec it you must be at least: " << form.getExecGrade();
	if (form.getSignStatus())
		os << "Actual status: Signed!";
	else
		os << "Actual status: Unsigned!"; 
	return os;
}

const char* Form::GradeTooHighException::what () const throw()
{
	return("Grade is too high!");
}

const char* Form::GradeTooLowException::what () const throw()
{
	return("Grade is too low!");
}

void Form::beSigned(Bureaucrat& bc)
{
	if (bc.getGrade() <= this->getSignGrade())
		this->signStatus = true;
	else
		throw Form::GradeTooLowException();
}