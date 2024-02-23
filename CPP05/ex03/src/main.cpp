#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern i;
	AForm* f = i.makeForm("robotomy request", "Test");
	Bureaucrat b("Jeez", 1);
	b.executeForm(*f);
	b.signForm(f);
	b.executeForm(*f);
	delete f;
	f = i.makeForm("presidential pardon", "Test");
	b.executeForm(*f);
	b.signForm(f);
	b.executeForm(*f);
	delete f;
	f = i.makeForm("shrubbery creation", "Test");
	b.executeForm(*f);
	b.signForm(f);
	b.executeForm(*f);
	delete f;
	return 0;
}