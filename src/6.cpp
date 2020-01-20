#include <iostream>
#include "input.hpp"
#include "6.hpp"

bool isPrime() {
    std::cout << "Check number is prime" << std::endl;
    int num;
    std::cin >> num;
    input(num);
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}
