#include <iostream>
#include "do_while_count_utils.h"
#include "grade_utils.h"
#include "integer_utils.h"
#include "string_utils.h"
#include "while_count_utils.h"


int main() {

	int user_input;

	std::cout << "1. Integer operations" << std::endl;
	std::cout << "2. Character arrays and C-style strings" << std::endl;
	std::cout << "3. Grade evaluation" << std::endl;
	std::cout << "4. While-loop counting" << std::endl;
	std::cout << "5. Do-while and range-based for counting" << std::endl;
	std::cout << "6. Quit" << std::endl;

	std::cin >> user_input;

	do {
	
		if (user_input > 0 && user_input < 7) {
	
			switch (user_input) {
				case 1:
					integer_utils::runIntegerOption();
					break;
				case 2:
					string_utils::runStringOption();
					break;
				case 3:
					grade_utils::calculateGrade();
					break;
				case 4:
					while_count_utils::runWhileCount();
					break;
				case 5:
					do_while_count_utils::runDoWhileCount();
					break;
			}

			std::cout << "1. Integer operations" << std::endl;
			std::cout << "2. Character arrays and C-style strings" << std::endl;
			std::cout << "3. Grade evaluation" << std::endl;
			std::cout << "4. While-loop counting" << std::endl;
			std::cout << "5. Do-while and range-based for counting" << std::endl;
			std::cout << "6. Quit" << std::endl;
		}

		std::cin >> user_input;

	} while (user_input != 6);

	std::cout << "Goodbye!" << std::endl;

	return 0;
}
