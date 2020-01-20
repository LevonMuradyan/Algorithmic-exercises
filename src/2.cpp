#include <iostream>
#include "input.hpp"
#include "2.hpp"

std::string gradesToLetters() {
    std::cout << "Enter your number 0-100" << std::endl;
    
    
    int num;
    std::cin >> num;
    input(num);
    if (num >= 0 && num < 60)
        return "F";
    else if (num > 59 && num < 70)
        return "D";
    else if (num > 69 && num < 80)
        return "C";
    else if (num > 79 && num < 90)
        return "B";
    else if (num > 89 && num < 101)
        return "A";
    else {
        std::cout << "You must enter number between 0-100" << std::endl;    
        exit(0);
    }   
}
