#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

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
	void signForm(AForm *fc);
	void executeForm(AForm const & form);

	std::ostream& operator<<(std::ostream& os);

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

#endif