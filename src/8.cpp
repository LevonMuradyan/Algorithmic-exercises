#include <iostream>
#include "input.hpp"
#include "8.hpp"

int concateNumbers() {
    std::cout << "Enter 2 numbers to concatinate" << std::endl; 
    int n, m, i = 1;
    std::cin >> n >> m;
    input(n);
    input(m);
    while (m / i) 
        i *= 10;
    std::cout << "The result is = ";
    return n*i+m;
}

