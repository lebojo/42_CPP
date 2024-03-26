#ifndef AForm_HPP
# define AForm_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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

	AForm(std::string name, int signGrade, int execGrade);
	~AForm();
	AForm(const AForm &AForm);
	AForm &operator=(const AForm &AForm);
	AForm();
	std::ostream& operator<<(std::ostream& os);

	const std::string getName() const;
	virtual int getSignGrade() const;
	virtual int getExecGrade() const;
	virtual bool getSignStatus() const;

	virtual void beSigned(Bureaucrat& bc);
	virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& o, AForm const& rhs);
#endif