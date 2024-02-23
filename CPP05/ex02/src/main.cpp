#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	{
		Bureaucrat b("Jesus", 1);
		ShrubberyCreationForm f("test");
		b.executeForm(f);
	}
	{
		Bureaucrat b("Jesus", 1);
		PresidentialPardonForm f("test");
		b.executeForm(f);
	}
	{
		Bureaucrat b("Jesus", 1);
		RobotomyRequestForm f("test");
		b.executeForm(f);
	}

}