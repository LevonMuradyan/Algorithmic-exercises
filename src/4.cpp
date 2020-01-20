#include <iostream>
#include "input.hpp"
#include "4.hpp"

int sumOfDigits() {
    int num, sum =0;
    std::cin >> num;
    input(num);
    while (num) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}
