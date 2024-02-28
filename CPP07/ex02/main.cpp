#include "Array.hpp"

int main() {
    // Test du constructeur par défaut
    Array<int> defaultArray;
    std::cout << "Taille du tableau par défaut : " << defaultArray.size() << std::endl;

    // Test du constructeur avec taille
    Array<int> sizedArray(10);
    std::cout << "Taille du tableau de taille 10 : " << sizedArray.size() << std::endl;

	sizedArray[3] = 42;
	std::cout << "sizedArray[0] = " << sizedArray[3] << std::endl;

    // Test du constructeur de copie
    Array<int> copiedArray(sizedArray);
    std::cout << "Taille du tableau copié : " << copiedArray.size() << std::endl;
	std::cout << "copiedArray[3] = " << copiedArray[3] << std::endl;

	try {
		std::cout << "Trying to access out of range index" << std::endl;
		std::cout << "sizedArray[10] = " << sizedArray[10] << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

    return 0;
}