/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 10/30/24
Date Completed: 10/29/24
Date Submitted: 10/29/24

Program Purpose:
 this program asks the user to enter an item’s wholesale cost and its markup percentage. it then displays the item’s retail price.
*/

#include <iostream>  // include standard input-output library
using namespace std;  // to avoid using std:: before every time the standard library is used

// function to calculate the retail cost
double calculateRetail(double wholesale, double markup) {
    return (markup / 100 + 1) * wholesale;
}

int main() {  // main function
    double wholesale, markup; // variables to hold values of wholesale price and markup percentage

    // to get user input
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesale;
    
    // input validation to ensure value isnt negative
    while (wholesale < 0){
        cout << "ERROR: Price cannot be negative" << endl;
        cout << "Enter the item's wholesale cost: ";
        cin >> wholesale;
    }
    cout << "Enter the item's markup percentage: ";
    cin >> markup;
    
    // input validation to ensure value isnt negative
    while (markup < 0){
        cout << "ERROR: Markup percentage cannot be negative" << endl;
        cout << "Enter the item's markup percentage: ";
        cin >> markup;
    }

    // display the retail cost
    cout << "The retail cost of the item is: " << calculateRetail(wholesale, markup) << endl;

    return 0; // shows program has been executed successfully.
}
