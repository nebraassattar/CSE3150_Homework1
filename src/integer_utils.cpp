#include <iostream>
#include "integer_utils.h"

void integer_utils::runIntegerOption() {
	
	int first, second;
	
	std::cout << "Enter first integer" << std::endl;
	std::cin >> first;

	std::cout << "Enter second integer" << std::endl;
	std::cin >> second;

	if (second == 0) {
		std::cout << "Error: division by zero" << std::endl;
		return;
	}

	int quotient = first / second;
	std::cout << "Result: " << quotient << std::endl;

	// Now I will apply post-increment and pre-increment to our first integer
	std::cout << "After post-increment: " << first++ << std::endl;
	std::cout << "After pre-increment: " << ++first << std::endl;
}
