#include <iostream>
#include <string>
#include "grade_utils.h"

double grade_utils::calculateGrade() {
	
	char single_char;
	double numeric_grade;
	int status;

	std::cout << "Enter student type (U for undergrad. G for grad):" << std::endl;
	std::cin >> single_char;

	std::cout << "Enter numeric grade:" << std::endl;
	std::cin >> numeric_grade;

	if (numeric_grade < 0 || numeric_grade > 100) {
		std::cout << "Invalid grade" << std::endl;
		std::exit(1);
	}

	if ((single_char == 'U' || single_char == 'u') && numeric_grade >= 60) {
		status = 1;
	} else if ((single_char == 'G' || single_char == 'g') && numeric_grade >= 70) {
		status = 1;
	} else {
		status = 0;
	}

	if (status == 1) {
		std::cout << "Status: Pass" << std::endl;
	} else {
		std::cout << "Status: Fail" << std::endl;
	}

	return numeric_grade; 

}
