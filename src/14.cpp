#include <iostream>
#include <fstream>
#include <limits>
#include "14.hpp"

void guessingGame() {
    /*Game that finding your number
    Args :
        None
    Raises :
        KeyboardInterrupt: if we push 'Ctrl+c'
    Returns :
        void
    */

    // i is the lowest number in range of possible guess
    int i = 0;
    // j is the highest number in range of possible guesses
    int j = 100;
    // m is the middle number in range of possible guesses
    int m = 50;
    // counter is the number of guesses take.
    int counter = 0;

    int n = 0;

    printf("\n(l) means it's too low\n");
    printf("(c) means it's your guess\n");
    printf("(h) means it's too high\n ");

    while (true) {
        n = m;

        char condition;
        printf("\nIs your guess %d ?  ", m);
        std::cin >> condition;
        while(1) {
            if(std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << "You have entered wrong input" << std::endl;
                std::cin >> condition;
            }

            if(!std::cin.fail())
                break;
    }

        if (condition == 'l') {
            i = m + 1;
            counter += 1;
        }
        else if (condition == 'h') {
            j = m - 1;
            counter += 1;
        }
        else if (condition == 'c') {
            counter += 1;
            break;
        }
        else {
            printf("\nInvalid command, you must type one of these followings \n");
            printf("\n(l) means it's too low\n");
            printf("(c) means it's your guess\n");
            printf("(h) means it's too high\n ");
        }
        m = (i + j) / 2;
        if (n == j) {
            printf("You are kidding me it must be the number %d", j);
            break;
        }
        if (n == i) {
            printf("\nYou are kidding me it must be the number %d", i);
            break;
        }
    }
    printf("\nIt took %d times to guess your number\n", counter);

}

void gameMenu() {

    //Until you quit the game :
    while (true) {

        printf("********************************************\n");
        printf("********************************************\n");
        printf(" Press (r) to see the game rules \n");
        printf(" Press (s) to start the game \n");
        printf(" Press (q) or (Ctrl+C) to quit the game \n");
        printf("********************************************\n");
        printf("********************************************\n");

        try {
            char controller;
            printf("Please enter one of these commands - ");
            std::cin >> controller;
            while(1) {
                if(std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "You have entered wrong input" << std::endl;
                    std::cin >> controller;
                }

                if(!std::cin.fail())
                    break;
            }

            //Checking for rulesand open cow_bull_rules.txt:
            if (controller == 'r') {
                std::string myText;
                std::ifstream MyReadFile("./guessing_game_rules.txt");
                while (std::getline(MyReadFile, myText)) {
                    std::cout << myText << std::endl;
                }

                MyReadFile.close();
            }
            //Checking for quit:
            else if (controller == 'q') {
                throw 'q';
            }
            //Checking for start:
            else if (controller == 's') {
                guessingGame();
            }
            //Checking for other commands
            else {
                printf("\nInvalid command, try again!!!\n");
            }
        }

        catch (char) {
            printf("\nYou pressed `q` and exit the program\n");
            printf("If you want to play, please execute again!!!\n");
            exit(0);
        }
    }
}
