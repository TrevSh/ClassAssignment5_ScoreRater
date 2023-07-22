// ClassAssignment5_ScoreRater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    if (true) {
        std::cout << "This is always displayed.\n\n";
    }
    if (false) {
        std::cout << "This is never displayed\n";
    }
    int score = 1000;

    if (score) {
        std::cout << "Atleast you didnt get zero...";
    }
    if (score >= 250) {
        std::cout << "You scored 250 or more. Nice";
    }
    if (score >= 500) {
        std::cout << "You scored 500 or more. Dope";
    }
    if (score >= 1000) {
        std::cout << "You scored 1000 or more! Crazy!";
    }
    if (score >= 2000) {
        std::cout << "Your score is over 2000! WOW!";
    }
    if (score > 9000) {
        std::cout << "Your score... ITS OVER 9000!!!";
    }

    return 0;
}