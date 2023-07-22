//Use F11 (On windows) To debug the program and see each line executed.
#include <iostream>

int main()
{
    int score;
    std::cout << "Enter a score: ";
    std::cin >> score;

    if (score > 9000) {                                                 //The program will check each statement starting and execute the one with the proper conditions met.
        std::cout << "Your score... ITS OVER 9000!!!\n";
    }
    else if (score >= 2000) {
        std::cout << "Your score is over 2000! WOW!\n";
    }
    else if (score >= 1000) {
        std::cout << "You scored 1000 or more! Crazy!\n";
    }
    else if (score >= 500) {                                            //else will execute a block of code only if the previous if is false. Can followed by another if (Like shown).
        std::cout << "You scored 500 or more. Dope\n";
    }
    else if (score >= 250) {
        std::cout << "You scored 250 or more. Nice\n";
    }
    else{
        std::cout << "Cmon, you didnt even try. Only "<<score<<"? Ridiculous. :/\n";
    }

    return 0;
}