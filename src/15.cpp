#include <iostream>
#include "15.hpp"

std::pair<int, int> minAndMax() {
    int min = 42949672965;
    int max = 0;
    std::cout << "Enter 10 random numbers" << std::endl;
    for (int i = 0; i < 10; i++) {
        int num;
        std::cin >> num;
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    return {min, max};
}
