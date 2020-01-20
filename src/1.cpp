#include <iostream>
#include <limits>
#include "1.hpp"

///Very Simple calculator 
double calcArithmOperation() {
    std::cout << "Number 1 running!" << std::endl;
    char op;
    double num1, num2;
    
    std::cout << "Enter arithmetic expression!" << std::endl;
    /// It allows user to enter operator i.e. +, -, *, / 
    /// It allow user to enter the operands
     
    std::cin >> num1 >> op >> num2;
    while(1) {
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "You have entered wrong input" << std::endl;
            std::cin >> num1 >> op >> num2;
        }

        if(!std::cin.fail())
            break;
    }

    switch (op) {

        case '+':
            return num1 + num2;
            break;
        case '-':
            return num1 - num2;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            return num1 / num2;
            break;
        default:
            std::cout << "Error! operator is not correct" << std::endl;
            exit(0);
            break;
    }
   
}
