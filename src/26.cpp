#include <iostream>
#include "26.hpp"

std::string upperToLower() {
    std::string upper;
    std::getline(std::cin, upper);

    for (int i = 0; i < upper.size(); ++i)
        if (upper[i] >= 'A' && upper[i] <= 'Z')
            upper[i] += 32; 
    return upper;
}

std::string lowerToUpper() {
    std::string lower;
    std::getline(std::cin, lower);

    for (int i = 0; i < lower.size(); ++i)
        if (lower[i] >= 'a' && lower[i] <= 'z')
            lower[i] -= 32;
    return lower;
}
