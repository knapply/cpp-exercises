#include "stdafx.h"
#include <iostream>

int compute_height() {
	int feet, inches;

	std::cout << "compute_height() - Enter Feet: ";
	std::cin >> feet;
	std::cout << "compute_height() - Enter Inches: ";
	std::cin >> inches;

	return feet * 12 + inches;
}