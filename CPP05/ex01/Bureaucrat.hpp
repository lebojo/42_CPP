#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int	grade;
public:
	Bureaucrat(std::string newName, int newGrade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);
	Bureaucrat();
	~Bureaucrat();
	const std::string getName() const;
	int	getGrade() const;

	void promote();
	void demote();
	void signForm(Form *fm);

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
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif