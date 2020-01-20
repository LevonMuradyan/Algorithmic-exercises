#include <iostream>
#include "input.hpp"
#include "7.hpp"

bool isPalindrome() {
    std::cout << "Check number is palindrome" << std::endl;
    int num, rev = 0;
    std::cin >> num;
    input(num);
    int tmp = num;
    if (tmp % 10 == 0)
        return false;
    while (tmp) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }
    return num == rev;
}
