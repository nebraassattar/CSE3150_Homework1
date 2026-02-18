#include <iostream>
#include <string>
#include "do_while_count_utils.h"

void do_while_count_utils::runDoWhileCount() {
	int variable;

	do {
		std::cout << "Enter a number betweenn 1 and 5:" << std::endl;
		std::cin >> variable;
	} while (variable <= 1 || variable >= 5);

	int array[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++) {
		std::cout << "Value: " << array[i] << std::endl;
		
		if (array[i] == variable)
			break;
	}
}
