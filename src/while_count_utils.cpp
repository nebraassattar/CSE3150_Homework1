#include <iostream>
#include <string>
#include "while_count_utils.h"

void while_count_utils::runWhileCount() {
	
	int user_input;
	int count = 1;

	std::cout << "Enter a number to count to:" << std::endl;
	std::cin >> user_input;

	while (user_input > 10) {
		std::cout << "I'm programmed to only count up to 10!" << std::endl;
		std::cout << "Enter a number to count to:" << std::endl;
		std::cin >> user_input;
	}

	while (count <= user_input) {
		if (count == 5) {
			count++;
			continue;
		}
		std::cout << count << std::endl;
		count++;
	}

}
