/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 10/21/24
Date Completed: 10/15/24
Date Submitted: 10/15/24

Program Purpose:
 The purpose of this program is to prompt the user to enter a series of integers. After all the numbers have been entered, the program will display the largest and smallest numbers entered.
*/

#include <iostream> // include input/output stream library
#include <string> // include string library
using namespace std; // use standard namespace

int main() {
    int largest = 0, smallest = 9999, num; // declare largest and smallest with initial values
    string input; // string to hold user input
    bool firstInput = true; // flag to check if it's the first valid input

    cout << "Enter a series of integers (0-9999). Enter *77 to end." << endl; // prompt user for input

    while (true) { // start an infinite loop for user input
        cout << "Enter a number: "; // ask user for a number
        cin >> input; // read user input

        if (input == "*77") { // check if the user wants to end input
            break; // exit the loop
        }

        // convert the input to an integer manually
        num = 0; // reset num for each new input
        bool isValid = true; // flag to check if the input is valid

        for (char ch : input) { // iterate over each character in the input string
            if (ch >= '0' && ch <= '9') { // check if the character is a digit
                num = num * 10 + (ch - '0'); // convert the character to an integer
            } else {
                isValid = false; // set isValid to false if a non-digit character is found
                break; // exit the loop if the input is invalid
            }
        }

        // check if the number is within the valid range (0 to 9999)
        if (!isValid || num < 0 || num > 9999) {
            cout << "Invalid input. Please enter a number between 0 and 9999." << endl;
            continue;
        }

        // update largest and smallest numbers
        if (firstInput) { // check if it's the first valid input
            largest = smallest = num; // initialize both largest and smallest
            firstInput = false; // reset the flag
        } else {
            if (num > largest) largest = num; // update largest if current num is greater
            if (num < smallest) smallest = num; // update smallest if current num is smaller
        }
    }

    // display results
    if (!firstInput) { // check if at least one valid number was entered
        cout << "Largest number entered: " << largest << endl; // display largest number
        cout << "Smallest number entered: " << smallest << endl; // display smallest number
    } else {
        cout << "No valid numbers were entered." << endl; // message if no valid input was given
    }

    return 0; // shows program has been executed successfully
}
