#include <iostream>
#include <string>
#include "28.hpp"

// O(n)
bool isSubstring() {
    std::string s1, s2;
    std::getline (std::cin, s1);
    std::getline (std::cin, s2);

    for (int i = 0; i < s1.size() - s2.size() + 1; i++)
        if(s2 == std::string(s1.begin() + i,s1.begin() + i + s2.size()))
            return true;
    return false;
}
