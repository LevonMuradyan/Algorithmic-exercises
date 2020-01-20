#include <iostream>
#include "input.hpp"
#include "9.hpp"

bool isPowerOfTwo() {
    std::cout << "Check number is power of 2" << std::endl;
    int num;
    std::cin >> num;
    input(num);
	return num && (!(num & (num - 1)));
} 
