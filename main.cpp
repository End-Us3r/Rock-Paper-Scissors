//James Atkins
//First coded 08-23-2021
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

int main() {

    cout << "################################### WELCOME TO ROCK < PAPER < SCISSORS! ###################################" << endl;
    cout << "                                             Best out of 5                                                 " << endl;
    cout << endl;

    char userChoice, userInput;
    char computerChoice;
    int randNum;
    int i;
    int wins = 0;
    int losses = 0;
    int ties = 0;

    srand(time(0));

do {

     for (i = 0; i < 5; ++i) {
            randNum = rand() % 3;

    if (randNum == 0) {
        computerChoice = 'R';
    }else if (randNum == 1) {
        computerChoice = 'P';
    }else if (randNum == 2) {
        computerChoice = 'S';
    }

    cout << "Please choose between Rock, Paper, or Scissors.(Enter R, P, or S)" << endl;
    cin >> userChoice;
    cout << " " << endl;

    if (computerChoice == 'R') { //Rock
        if (userChoice == 'R'){
            cout << "Computer chose Rock, it's a draw!!" << endl;
            ties = ties + 1;
        }
        else if (userChoice == 'P'){
            cout << "Computer chose Rock, you win!!" << endl;
            wins = wins + 1;
        }
        else if (userChoice == 'S') {
            cout << "Computer chose Rock, you lose!!" << endl;
            losses = losses + 1;
        }
    }
    else if (computerChoice == 'P'){  //Paper
        if (userChoice == 'R'){
            cout << "Computer chose Paper, you lose!!" << endl;
            losses = losses + 1;
        }
        else if (userChoice == 'P'){
            cout << "Computer chose Paper, it's a draw!" << endl;
            ties = ties + 1;
        }
        else if (userChoice == 'S') {
            cout << "Computer chose Paper, you win!!" << endl;
            wins = wins + 1;
        }
    }
    else if (computerChoice == 'S') {  //Scissors
        if (userChoice == 'R'){
            cout << "Computer chose Scissors, you win!!" << endl;
            wins = wins + 1;
        }
        else if (userChoice == 'P'){
            cout << "Computer chose Scissors, you lose!!" << endl;
            losses = losses + 1;
        }
        else if (userChoice == 'S') {
            cout << "Computer chose Scissors, it's a draw!" << endl;
            ties = ties + 1;
        }
    }
    wins = wins;
    losses = losses;
    ties = ties;
    }

    if ((wins) > (losses))
    {
        cout << "You won the game!!!" << endl;
        cout << endl;
    }
    else if ((losses) > (wins))
    {
        cout << "You lost the game!!!" << endl;
        cout << endl;
    }
    else if ((losses) ==(wins))
    {
        cout << "It's a tie game!!!" << endl;
        cout << endl;
    }

    cout << "Would you like to play again? (Enter Y for yes, N for no.)" << endl;
    cin >> userInput;
    cout << endl;

} while (userInput != 'N');


    return 0;
}
