#include <iostream>
#include "input.hpp"
#include "4.hpp"

int sumOfDigits() {
    std::cout << "Enter your number" << std::endl;
    int num, sum = 0;
    std::cin >> num;
    input(num);
    while (num) {
        sum += num % 10;
        num /= 10;
    }

    std::cout << "Sum of digits is = ";
    return sum;
}
