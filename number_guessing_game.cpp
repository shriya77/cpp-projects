/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 10/10/24
Date Completed: 10/10/24
Date Submitted: 10/10/24

Program Purpose:
This program generates a random number between 10 and 20 and then prompts the user to guess the number. In the case that the user is wrong, it says whether they are lower or higher than the actual number and displays the number of guesses it took the user to guess the number correctly at the end.
*/

#include <iostream> // include the standard input-output stream library
#include <ctime> // for time()
#include <cstdlib> // for srand and rand
using namespace std; // avoids using std:: before every standard library use

int main() { // main function
    int number, guess, tries; // variables for random number, user's guess, and number of attempts
    
    const int number_min = 10; // minimum number value for the range
    const int number_max = 20; // maximum number value for the range
    
    // Use current time to generate a unique seed for random number generation
    unsigned seed = time(0);
    srand(seed); // seed the random number generator
    
    // generate a random number between number_min (10) and number_max (20)
    number = rand() % (number_max - number_min + 1) + number_min;
    
    // prompt user to guess the randomly generated number
    cout << "Guess the number between 10 and 20: ";
    cin >> guess; // store user's guess in the variable `guess`
    
    // initialize the number of attempts (tries) to 1, since the user has already made one guess
    tries = 1;
    
    // if the user's guess is lower than the random number, ask them to guess again
    while (guess < number) {
        cout << "Too low, try again" << endl; // feedback for too low guess
        tries = tries + 1; // increment the guess count
        cout << "Guess the number between 10 and 20: "; // prompt the user again
        cin >> guess; // get a new guess from the user
    }
    
    // if the user's guess is higher than the random number, ask them to guess again
    while (guess > number) {
        cout << "Too high, try again" << endl; // feedback for too high guess
        tries = tries + 1; // increment the guess count
        cout << "Guess the number between 10 and 20: "; // prompt the user again
        cin >> guess; // get a new guess from the user
    }
    
    // once the correct number is guessed, congratulate the user
    if (guess == number) // condition for correct guess
        cout << "Congratulations!!! You guessed the number in " << tries << " tries."; // print number of attempts
    
    return 0; // indicates that the program executed successfully
}
