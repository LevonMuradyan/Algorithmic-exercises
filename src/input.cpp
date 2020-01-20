#include <iostream>
#include <limits>
#include "input.hpp"

void input(int& num) {
    while(1) {
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "You have entered wrong input" << std::endl;
            std::cin >> num;
        }

        if(!std::cin.fail())
            break;
    }
}
