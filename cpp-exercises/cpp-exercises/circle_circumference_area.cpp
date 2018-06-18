#include "stdafx.h"
#include <iostream>

float *circumference_area() {
	float pi = 3.1415;
	float radius, circumference, area;
	static float circumference_area[2];
	
	std::cout << "Please enter a radius in inches: ";
	std::cin >> radius;
	
	circumference = 2 * pi * radius;
	area = pi * radius * radius;

	circumference_area[0] = circumference;
	circumference_area[1] = area;
	
	return circumference_area;
}
