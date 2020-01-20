#include <iostream>
#include "input.hpp"
#include "3.hpp"

int calcTheSum() {
    int num, sum = 0;
    std::cin >> num;
    input(num);
    for(int i = 3; i < num; ++i) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum; 
}
