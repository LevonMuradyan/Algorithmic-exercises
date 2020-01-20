#include <iostream>
#include "input.hpp"
#include "3.hpp"

int calcTheSum() {
    std::cout << "Enter your number" << std::endl;
    int num, sum = 0;
    std::cin >> num;
    input(num);
    for(int i = 3; i < num; ++i) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    std::cout << "Sum is = "; 
    return sum; 
}
