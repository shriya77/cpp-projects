/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 11/11/24
Date Completed: 11/07/24
Date Submitted: 11/11/24

Program Purpose:
 The program uses two parallel arrays to track monthly sales of five different types of salsa—mild, medium, sweet, hot, and zesty. It allows the user to enter the number of jars sold for each variety, and then provides a report that shows each type's sales, total sales, and the highest and lowest selling salsa types.
*/

#include <iostream>  // include standard input-output library
#include <string> // for string handling
using namespace std; // to avoid using std:: before every standard library use

int main() {
    const int SIZE = 5; // constant size of arrays for five types of salsa
    string salsa_names[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"}; // array holding salsa names
    int jars_used[SIZE] = {}; // array to hold the number of jars sold for each salsa type
    int total_sales = 0; // variable to calculate total sales of all salsas
    int highest_selling_index = 0; // variable to track index of highest-selling salsa type
    int lowest_selling_index = 0;  // variable to track index of lowest-selling salsa type
    
    // input loop for the number of jars sold
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the number of jars sold for " << salsa_names[i] << " salsa: ";
        cin >> jars_used[i];
        
        // check for negative input
        while (jars_used[i] < 0) {
            cout << "ERROR: Number of jars cannot be negative." << endl;
            cout << "Enter the number of jars sold for " << salsa_names[i] << " salsa: ";
            cin >> jars_used[i];
        }
        
        // add to total sales
        total_sales += jars_used[i];
    }

    // find the highest and lowest selling salsa flavours
    for (int i = 1; i < SIZE; i++) {
        if (jars_used[i] > jars_used[highest_selling_index]) {
            highest_selling_index = i;
        }
        if (jars_used[i] < jars_used[lowest_selling_index]) {
            lowest_selling_index = i;
        }
    }
    
    // display the sales report
    cout << "\nSalsa Sales Report\n";
    cout << "--------------------\n";
    for (int i = 0; i < SIZE; i++) {
        cout << salsa_names[i] << " salsa: " << jars_used[i] << " jars" << endl;
    }
    cout << "--------------------\n";
    cout << "Total Sales: " << total_sales << " jars" << endl;
    cout << "Highest selling salsa: " << salsa_names[highest_selling_index] << endl;
    cout << "Lowest selling salsa: " << salsa_names[lowest_selling_index] << endl;
    
    return 0; // shows program has been executed successfully
}
