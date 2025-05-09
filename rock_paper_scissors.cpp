/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 11/09/24
Date Completed: 11/05/24
Date Submitted: 11/08/24

Program Purpose:
 The purpose of this program is to make a rock paper scissors game that the user can play with the computer. Random number generation is used to determine the computer's move and the player will enter their move. The winner will then be announced.
*/

#include <iostream>  // include standard input-output library
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <string>
using namespace std;  // dont have to add std:: before each standard library use

// function to generate computer's move and return it
int moveComp() {
    int comp_min = 1; // smallest value random int can take
    int comp_max = 3; // largest value random int can take
    int comp_move;
    unsigned seed = time(0);
    srand(seed);
    comp_move = rand() % (comp_max - comp_min + 1) + comp_min;  // generates random number 1, 2, or 3
    return comp_move;
}

// function to get the string name for the computer's move
string getChoice(int comp_move) {
    if (comp_move == 1)
        return "Rock";
    else if (comp_move == 2)
        return "Paper";
    else
        return "Scissors";
}

int main() { // main function
    int user_move; // variable for storing user's move in the game
    int comp_move = moveComp();  // get the computer's move
    string comp_choice = getChoice(comp_move);  // get the computer's choice as a string

    // get user's move as a number
    cout << "Enter 1 for Rock" << endl;
    cout << "Enter 2 for Paper" << endl;
    cout << "Enter 3 for Scissors" << endl;
    cout << "Enter your move: ";
    cin >> user_move; // store choice in variable

    cout << "The computer's move was: " << comp_choice << endl;

    // getting result of match based on user and computer moves and displaying it
    if (comp_move == user_move) {
        cout << "It's a tie!" << endl;
    }
    else if ((comp_move == 1 && user_move == 2) || (comp_move == 2 && user_move == 3) || (comp_move == 3 && user_move == 1)) {
        cout << "YOU WON!!!" << endl;
    }
    else {
        cout << "You lost :(" << endl;
    }

    return 0; // shows program has been executed successfully
}
