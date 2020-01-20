#include <iostream>
#include "input.hpp"
#include "9.hpp"

bool isPowerOfTwo() {
    int num;
    std::cin >> num;
    input(num);
	return num && (!(num & (num - 1)));
} 
