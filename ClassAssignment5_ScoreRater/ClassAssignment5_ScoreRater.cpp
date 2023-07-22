//Use F11 (On windows) To debug the program and see each line executed.
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
        std::cout << "Atleast you didnt get zero...\n";
    }
    if (score >= 250) {
        std::cout << "You scored 250 or more. Nice\n";
    }
    if (score >= 500) {
        std::cout << "You scored 500 or more. Dope\n";
    }
    if (score >= 1000) {
        std::cout << "You scored 1000 or more! Crazy!\n";
    }
    if (score >= 2000) {
        std::cout << "Your score is over 2000! WOW!\n";
    }
    if (score > 9000) {
        std::cout << "Your score... ITS OVER 9000!!!\n";
    }

    return 0;
}