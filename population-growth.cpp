/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 10/15/24
Date Completed: 10/08/24
Date Submitted: 10/08/24

Program Purpose:
This program allows the user to enter the number of organisms in a population, the rate at which they increase, and the number of days they will multiply. It then calculates and displays the population size for each day.
*/

#include <iostream> // include the standard input-output stream library
using namespace std; // avoids using std:: before every standard library use

int main() { // main function
    int organisms, days; // number of organisms in a population and number of days for which they will multiply
    double increase; // the rate at which the population increases
    int num = 1; // to track current day for displaying results

    // prompt user for the initial number of organisms
    cout << "Enter the starting number of organisms in the population: ";
    cin >> organisms;
    // while loop to validate input
    while (organisms < 2) {
        cout << "INVALID ENTRY: number of organisms cannot be less than 2.\n";
        cout << "Enter the starting number of organisms in the population: ";
        cin >> organisms;
    }

    // prompt for the daily population increase rate as a percentage
    cout << "Enter their average daily population increase as a %: ";
    cin >> increase;
    // while loop to validate input
    while (increase < 0) {
        cout << "ERROR: increase cannot be negative.\n";
        cout << "Enter their average daily population increase as a %: ";
        cin >> increase;
    }
    increase = (increase / 100) + 1; // convert percentage to a multiplier

    // prompt for the number of days they will multiply
    cout << "Enter the number of days they will multiply: ";
    cin >> days;
    // while loop to validate input
    while (days < 1) {
        cout << "ERROR: number of days cannot be less than 1.\n";
        cout << "Enter the number of days they will multiply: ";
        cin >> days;
    }

    // output population size per day
    cout << "\nSize of population per day:\n";
    cout << "--------------------------\n";
    // calculates the number of organisms and displays the result
    while (num <= days) {
        cout << "Day " << num << ": " << organisms << " organisms\n";
        organisms = organisms * increase; // update the population for the next day
        num++;
    }

    return 0; // shows the program has been executed successfully.
}
