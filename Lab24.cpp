/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 12/02/24
Date Completed: 11/23/24
Date Submitted: 11/23/24

Program Purpose:
 This program checks if a user-entered charge account number is valid by searching for it in a predefined list of valid numbers using a linear search. It displays a message indicating whether the number is valid or invalid based on the search result.
*/

#include <iostream> // include input-output stream library
using namespace std; // to avoid using std:: before every standard library use

int main() {
    const int SIZE = 18;  // fixed array size
    bool validity = false; // to check for validity of number
    int user_account; // variable to store user inputted account number
    int accounts[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002}; // array to hold account numbers for comparison

    cout << "Enter your 7-digit charge account number: "; // asking user input for account number
    cin >> user_account; // storing user input in variable

    // checking validity by comparing with each number in array
    for (int i = 0; i < SIZE; i++) {
        if (user_account == accounts[i]) {
            validity = true;
            break;
        }
    }

    // displaying results
    if (validity)
        cout << "Account number is valid" << endl;
    else
        cout << "Account number is invalid" << endl;

    return 0; // shows program has been executed successfully
}
