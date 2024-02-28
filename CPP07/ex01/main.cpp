#include <iostream>
#include "iter.hpp"

void printInt(int n) {
	std::cout << n << std::endl;
}

int main( void ) {
	int arr[] = {51, 42, 33, 24, 15};

	iter(arr, 5, printInt);
	return 0;
}