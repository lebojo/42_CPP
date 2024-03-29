#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	const int signGrade;
	const int execGrade;
	bool signStatus;

public:
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	Form(std::string name, int signGrade, int execGrade);
	~Form();
	Form(const Form &form);
	Form &operator=(const Form &form);
	Form();

	const std::string getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool getSignStatus() const;

	void beSigned(Bureaucrat& bc);
};
std::ostream& operator<<(std::ostream& o, Form const& rhs);
#endif