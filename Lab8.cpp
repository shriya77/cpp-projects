/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Due date: 9/27/24
 Date Completed: 09/24/24
 Date Submitted: 09/24/24
 
 Program Purpose:
 This program allows the user to select an internet service provider package and then calculates the total bill for the customer based on the package they choose.
 */

#include <iostream> // include the standard input-output stream library
using namespace std; // avoids using std:: before every standard library use


int main() // main function
{
    char choice; // variable to store user's package choice
    int hours; // variable to store the hours used
    double bill; // variable to store the total bill
    
    // constants that hold the values of the price of each package
    const double costOfA = 9.95;
    const double costOfB = 14.95;
    const double costOfC = 29.95;

    // prompt user to select package and store the value
    cout << "Which package have you purchased?" << endl;
    cout << "Enter A, B or C: ";
    cin >> choice;

    // switch statement to handle the selected package
    switch (choice)
    {
        case 'A': // if package A is selected
            cout << "You selected package A. Please input how many hours you have used it for: ";
            cin >> hours;

            // validation to ensure hours dont exceed maximum allowed
            if (hours > 744) {
                cout << "ERROR: The number of hours used in a month cannot exceed 744." << endl;
                return 1; // exit program with error message
            }

            // calculate the bill for package A
            if (hours <= 10) {
                bill = costOfA; // no extra charges if hours are within limit
            } else {
                bill = ((hours - 10) * 2) + costOfA; // extra charge of $2 per hour for every hour above limit
            }

            // display the final bill for package A
            cout << "Your monthly bill is: $" << bill << endl;
            break;

        case 'B': // if package B is selected
            cout << "You selected package B. Please input how many hours you have used it for: ";
            cin >> hours;

            // validation to ensure hours dont exceed maximum allowed
            if (hours > 744) {
                cout << "ERROR: The number of hours used in a month cannot exceed 744." << endl;
                return 1; // exit program with error message
            }

            // calculate the bill for package B
            if (hours <= 20) {
                bill = costOfB; // no extra charges if hours are within limit
            } else {
                bill = ((hours - 20) * 1) + costOfB; // extra charge of $1 per hour for every hour above limit
            }

            // display the final bill for package B
            cout << "Your monthly bill is: $" << bill << endl;
            break;

        case 'C': // if package C is selected
            cout << "You selected package C. Please input how many hours you have used it for: ";
            cin >> hours;

            // validation to ensure hours dont exceed maximum allowed
            if (hours > 744) {
                cout << "ERROR: The number of hours used in a month cannot exceed 744." << endl;
                return 1; // exit program with error message
            }

            // display the final bill for package C
            cout << "Your monthly bill is: $" << costOfC << endl;
            break;

        // if an invalid package is entered then show an error message
        default:
            cout << "Invalid package choice. Please enter A, B, or C." << endl;
            return 1; // exit program with error message
    }

    return 0; // shows that the program has been executed successfully
}
