//Use F11 (On windows) To debug the program and see each line executed.
#include <iostream>

int main()
{
    std::cout << "Chose a difficulty\n\n";
    std::cout << "1.Easy\n";
    std::cout << "2.Medium\n";
    std::cout << "3.Hard\n\n";

    int choice;
    std::cout << "Choice (Number only!): ";
    std::cin >> choice;

    switch (choice) {                                               //Switch statements work like if statements. The program will go through all the cases until it reaches related case or "choice".
    case 1: 
        std::cout << "Easy. Playing it safe I see.\n\n";
        break;                                                      //"break" makes the program exit the switch statement. Without it, the program will continue through switch cases.
    case 2: 
        std::cout << "Medium. That's how you like your drinks?\n\n";
        break;
    case 3: 
        std::cout << "Hard. Time to put some hairs on that chest.\n\n";
        break;
    default:                                                       //Default will execute if the choice in invalid.
        std::cout << "Yeah, thats not a real choice buddy.\n\n";
        break;
    }

    char playGame = 'y';
    std::cout << "Would you like to continue to the game? (y/n): ";     //Initiates game loop. playGame will hold user confirmation. Changing the value from 'y' will end the loop.
    std::cin >> playGame;

    while (playGame == 'y') {                                           //The program will REPEAT until playGame is NOT y.
        int score;
        std::cout << "Enter a score: ";
        std::cin >> score;

        if (score > 9000) {                                           //The program will check each statement starting and execute the one with the proper conditions met.
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
        else {                                                               //This will be shown by default or if a user has a score lower than 250.
            std::cout << "Cmon, you didnt even try. Only " << score << "? Ridiculous. :/\n";
        }

        std::cout << "Would you like to try again? (y/n)\n";
        std::cin >> playGame;
    }
    std::cout << "Thanks for playing! Ta ta!";                              //Message will play before program ends
    return 0;
}