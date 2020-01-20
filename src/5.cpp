#include <iostream>
#include "input.hpp"
#include "5.hpp"

int inverseTheNumber() {
    int num, rev = 0;
    std::cin >> num;
    input(num);
    if (num % 10 == 0)
        return 0;
    while (num) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
