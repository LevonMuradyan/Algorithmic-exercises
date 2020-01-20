#include <iostream>
#include <string>
#include "27.hpp"

// O(n)
bool isAnagram() {
    std::string s1, s2;
    getline(std::cin, s1);
    getline(std::cin, s2);

    if(s1.size() != s2.size()) 
        return false;

    int i1 = 0, i2 = 0;

    for (int i = 0; i < s1.size(); i++) {
        i1 ^= (1 << (s1[i] - 97));
        i2 ^= (1 << (s2[i] - 97));
    }
    

    return i1 == i2;
}
