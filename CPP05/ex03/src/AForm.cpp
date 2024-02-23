#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "A new AForm was created (" << this->name << ")" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destroyed (" << this->name << ") :(" << std::endl;
}

const std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getSignGrade() const
{
	return (this->signGrade);
}

int AForm::getExecGrade() const
{
	return (this->execGrade);
}

bool AForm::getSignStatus() const
{
	return (this->signStatus);
}

std::ostream& operator<<(std::ostream& os, AForm const& form)
{
	os << form.getName() << ", to sign it you must be at least: " << form.getSignGrade() << " and for exec it you must be at least: " << form.getExecGrade();
	if (form.getSignStatus())
		os << ", Actual status: Signed!";
	else
		os << ", Actual status: Unsigned!"; 
	return os;
}

const char* AForm::GradeTooHighException::what () const throw()
{
	return("Grade is too high!");
}

const char* AForm::GradeTooLowException::what () const throw()
{
	return("Grade is too low!");
}

void AForm::beSigned(Bureaucrat& bc)
{
	if (bc.getGrade() <= this->getSignGrade())
		this->signStatus = true;
	else
		throw AForm::GradeTooLowException();
}

AForm::AForm(): name(""), signGrade(0), execGrade(0), signStatus(false)
{
}

AForm::AForm(const AForm &src) : name(src.name), signGrade(src.signGrade), execGrade(src.execGrade), signStatus(src.signStatus)
{
	*this = src;
}

AForm& AForm::operator=(const AForm&rhs)
{
	if (this != &rhs)
	{
		this->signStatus = rhs.getSignStatus();
	}
	return *this;
}

void AForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
}