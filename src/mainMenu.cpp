#include <iostream>
#include <cstdlib>
#include "util.hpp"

int main() {
    
    std::cout << "Main Menu" << std::endl << std::endl;
    std::cout << "Please choose one of some algorithmic exercises!" << std::endl << std::endl;
     
    std::cout << "Number 1: " << "Calculating Arithmetic Operations" << std::endl;
    std::cout << "Number 2: " << "Grades To Letters" << std::endl;
    std::cout << "Number 3: " << "Calculate The Sum" << std::endl;
    std::cout << "Number 4: " << "Calculate Sum Of Digits" << std::endl;
    std::cout << "Number 5: " << "Inverse The Number" << std::endl;
    std::cout << "Number 6: " << "Prime Numbers" << std::endl;
    std::cout << "Number 7: " << "Palindrome Numbers" << std::endl;
    std::cout << "Number 8: " << "Concatenate Numbers" << std::endl;
    std::cout << "Number 9: " << "Power Of 2" << std::endl;
    std::cout << "Number 10: " << "Draw rectangle" << std::endl;
    std::cout << "Number 11: " << "Draw Triangle" << std::endl;
    std::cout << "Number 12: " << "Draw Triangle-2" << std::endl;
    std::cout << "Number 13: " << "Guess A Number" << std::endl;
    std::cout << "Number 14: " << "Guess A Number(Roles Changed)" << std::endl;
    std::cout << "Number 15: " << "Minimum And Maximum" << std::endl;
    std::cout << "Number 16: " << "Occurance Of Numbers" << std::endl;
    std::cout << "Number 17: " << "Decimal To Binary" << std::endl;
    std::cout << "Number 18: " << "Binary To Decimal" << std::endl;
    std::cout << "Number 19: " << "Remove A Number" << std::endl;
    std::cout << "Number 20: " << "Reverse Order" << std::endl;
    std::cout << "Number 21: " << "Sum of All Numbers" << std::endl;
    std::cout << "Number 22: " << "Is Sorted" << std::endl;
    std::cout << "Number 23: " << "Sorting" << std::endl;
    std::cout << "Number 24: " << "Delete M_th element" << std::endl;
    std::cout << "Number 25: " << "Insert Number" << std::endl;
    std::cout << "Number 26: " << "Capital And Small Letters" << std::endl;
    std::cout << "Number 27: " << "Is Anagram" << std::endl;
    std::cout << "Number 28: " << "Is Substring" << std::endl << std::endl;

    int number;
    std::cin >> number;
    switch(number) {
        case 1:
            std::cout << calcArithmOperation() << std::endl;
            break;
        case 2:
            std::cout << gradesToLetters() << std::endl;
            break;
        case 3:
            std::cout << calcTheSum() << std::endl;
            break;
        case 4:
            std::cout << sumOfDigits() << std::endl;
            break;
        case 5:
            std::cout << inverseTheNumber() << std::endl;
            break;
        case 6:
            std::cout << isPrime() << std::endl;
            break;
        case 7:
            std::cout << isPalindrome() << std::endl;
            break;
        case 8:
            std::cout << concateNumbers() << std::endl;
            break;
        case 9:
            std::cout << isPowerOfTwo() << std::endl;
            break;
        case 10:
            std::cout << "Draw rectangle" << std::endl;
            break;
        case 11:
            std::cout << "Draw Triangle" << std::endl;
            break;
        case 12:
            std::cout << "Draw Triangle-2" << std::endl;
            break;
        case 13:
            std::cout << "Guess A Number" << std::endl;
            break;
        case 14:
            gameMenu();
            break;
        case 15:
            
            std::cout << "Min = " << minAndMax().first << std::endl;
            std::cout << "Max = " << minAndMax().second << std::endl;
            break;
        case 16:
            std::cout << "Occurence Of Numbers" << std::endl;
            break;
        case 17:
            std::cout << decimalToBinary() << std::endl;
            break;
        case 18:
            std::cout << "Binary To Decimal" << std::endl;
            break;
        case 19:
            std::cout << "Remove A Number" << std::endl;
            break;
        case 20:
            std::cout << "Reverse Order" << std::endl;
            break;
        case 21:
            std::cout << "Sum of All Numbers" << std::endl;
            break;
        case 22:
            std::cout << "Is Sorted" << std::endl;
            break;
        case 23:
            std::cout << "Sorting" << std::endl;
            break;
        case 24:
            std::cout << "Delete M_th element" << std::endl;
            break;
        case 25:
            std::cout << "Insert Number" << std::endl;
            break;
        case 26:
            std::cout << "Upper To Lower = " << upperToLower() << std::endl;
            std::cout << "Lower To Upper = " << lowerToUpper() << std::endl;
            break;
        case 27:
            std::cout << isAnagram() << std::endl;
            break;
        case 28:
            std::cout << isSubstring() << std::endl;
            break;
        default:
            std::exit(0);
            break;
    }
    



    //gameMenu();
    //auto minandmax =minAndMax();
    //std::cout << minandmax.first << " " << minandmax.second << std::endl;
    //std::cout << decimalToBinary() << std::endl;
    //std::cout << upperToLower() << std::endl;
    //std::cout << isAnagram() << std::endl;
    //std::cout << isSubstring() << std::endl;
    return 0;
}
