#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat jesus("Jesus", 31);
	Form taxes("2024 Taxes", 150, 30);

	std::cout << jesus << std::endl;
	std::cout << taxes << std::endl;
    
	try{
		jesus.signForm(taxes);
	}catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		jesus.promote();
	} catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		jesus.signForm(taxes);
	}catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	std::cout << jesus << std::endl;
	std::cout << taxes << std::endl;

    return 0;
}
