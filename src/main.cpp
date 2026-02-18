#include <iostream>

int main() {

	int user_input;
	std::cin >> user_input;

	do {
	
		if (user_input > 0 && user_input < 7) {
	
			std::cout << "1. Integer operations" << std::endl;
			std::cout << "2. Character arrays and C-style strings" << std::endl;
			std::cout << "3. Grade evaluation" << std::endl;
			std::cout << "4. While-loop counting" << std::endl;
			std::cout << "5. Do-while and range-based for counting" << std::endl;
			std::cout << "6. Quit" << std::endl;
		
			switch (user_input) {
				case 1:
					//Option 1
					break;
				case 2:
					//Option 2
					break;
				case 3:
					//Option 3
					break;
				case 4:
					//Option 4
					break;
				case 5:
					//Option 5
					break;
			}
		}

		std::cin >> user_input;

	} while (user_input != 6);

	std::cout << "Goodbye!" << std::endl;

	return 0;
}
