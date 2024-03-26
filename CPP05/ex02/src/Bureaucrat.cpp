#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string newName, int newGrade) : name(newName)
{
	if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = newGrade;
	std::cout << "A new Bureaucrat is born (" << this->name << ")" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A bureaucrat is dead (" << this->name << ")" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::promote()
{
	if (this->grade > 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::demote()
{
	if (this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what () const throw()
{
	return("Grade is higher than 1");
}

const char* Bureaucrat::GradeTooLowException::what () const throw()
{
	return("Grade is lower than 150");
}

void Bureaucrat::signForm(AForm *fc)
{
	try{
		fc->beSigned(*this);
		std::cout << this->getName() << " signed " << fc->getName() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << this->getName() << " couldn't sign " << fc->getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name)
{
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	return (*this);
}

Bureaucrat::Bureaucrat()
{
}

void Bureaucrat::executeForm(AForm const & form)
{
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &Bureaucrat::operator<<(std::ostream &os)
{
	os << this->getName() << ", bureaucrat grade " << this->getGrade();
	return os;
}
