#include <iostream>
#include "input.hpp"
#include "8.hpp"

int concateNumbers() {
    int n, m, i = 1;
    std::cin >> n >> m;
    input(n);
    input(m);
    while (m / i) 
        i *= 10;

    return n*i+m;
}

