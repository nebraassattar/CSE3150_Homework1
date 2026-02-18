#include <iostream>
#include <string>
#include "string_utils.h"

void string_utils::runStringOption() {
	
	int user_int;
	std::string user_string;

	std::cout << "Enter string length:" << std::endl;
	std::cin >> user_int;

	if (user_int >= 20) {
		std::cout << "Error: Length must be less than 20" << std::endl;
		std::cerr << 1 << std::endl;
		std::exit(1);
	}

	std::cin.ignore();
	std::cout << "Enter string:" << std::endl;
	std::getline(std::cin, user_string);

	char array[20];

	for (int i = 0;i < user_int && i < user_string.size(); i++) {
		array[i] = user_string[i];
	}

	array[user_int] = '\0';
	
	std::cout << "C-style string: " << array << std::endl;
}
