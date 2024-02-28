#include <cstdlib>
#include <typeinfo>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p)) // On essaie de le dynamic cast et si c'est pas un A, ca return un ptr NULL
		std::cout << "A" << std::endl; // Parce que c'est un ptr (pas comme les ref)
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);  // On essaie de le dynamic cast et si c'est pas un A, ca throw l'erreur
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
}

int main(int ac, char **av)
{
	srand(time(NULL));
	if (ac == 1 || ac > 2 || !isdigit(av[1][0]))
	{
		Base *p = generate();
		identify_from_pointer(p);
		identify_from_reference(*p);
		delete p;
	}
	else
	{
		for (int i = 0; i < atoi(av[1]); i++)
		{
			Base *p = generate();
			identify_from_pointer(p);
			identify_from_reference(*p);
			delete p;
		}
	}
	return 0;
}