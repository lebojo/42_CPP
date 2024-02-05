#include "Bureaucrat.hpp"

int main() {
    Bureaucrat jesus("Jesus", 1);
	Bureaucrat dimitri("Dimitri", 150);
	Bureaucrat paul("Paul", 60);

	std::cout << jesus << std::endl;
	std::cout << dimitri << std::endl;
	std::cout << paul << std::endl;
    
	try{
		jesus.promote();
	} catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		dimitri.demote();
	} catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		paul.promote();
	} catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
	std::cout << jesus << std::endl;
	std::cout << dimitri << std::endl;
	std::cout << paul << std::endl;

    return 0;
}
