/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 11/23/24
Date Completed: 11/19/24
Date Submitted: 11/19/24

Program Purpose:
The program has 2 vectors with 5 elements in each. One is a vector with randomly generated lottery digits, and the other has 5 user-inputted lottery digits. The program then compares the two vectors to see how many numbers are similar. If all are the same, the user is told they've won the lottery.
*/

#include <iostream> // include input-output stream library
#include <vector> // library for vectors
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std; // to avoid using std:: before every standard library use

int main() { // main function
    const int SIZE = 5; // constant for number of elements in vectors
    vector<int> lottery(SIZE); // vector to store lottery numbers
    vector<int> user(SIZE); // vector to store user inputted numbers
    
    // min and max for random number generation
    int num_min = 0;
    int num_max = 9;
    
    // to count matching digits
    int count = 0;

    // seed the random number generator
    unsigned seed = time(0);
    srand(seed);

    // generate random lottery numbers
    for (int i = 0; i < SIZE; i++) {
        lottery[i] = rand() % (num_max - num_min + 1) + num_min;
    }

    // get user input
    for (int i = 0; i < SIZE; i++){
        cout << "Enter digit " << i + 1 << " of the user: ";
        cin >> user[i];
    }

    // display lottery numbers
    cout << "The lottery numbers are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << lottery[i] << " ";
    }
    cout << endl;

    // display user numbers
    cout << "Your numbers are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << user[i] << " ";
    }
    cout << endl;

    // compare the two vectors and count matches
    for (int i = 0; i < SIZE; i++) {
        if (lottery[i] == user[i]) {
            count++;
        }
    }

    // Display the result
    cout << "Number of matching digits: " << count << endl;

    if (count == SIZE)
        cout << "YOU ARE THE GRAND PRIZE WINNER!!!" << endl;
        
    return 0; // shows program has been executed successfully
}
