/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Due date: 10/07/24
 Date Completed: 10/03/24
 Date Submitted: 10/07/24
 
 Program Purpose:
 This program allows the user to enter the speed of the vehicle and the time for which it travels. The program then displays the distance the vehicle has traveled for each hour of that time period.
 */

#include <iostream> // include the standard input-output stream library
using namespace std; // avoids using std:: before every standard library use


int main() { // main function
    double speed, time; // variables to store values of speed of vehicle and time it travels for.
    int num = 1; // to track current hour while displaying distances at the end.
    
    
    // prompt the user to enter the speed of the vehicle and store its value
    cout << "Enter the speed of the vehicle in mph: ";
    cin >> speed;
    
    // validating entry to ensure it isnt negative
    while (speed < 0) {
        cout << "Invalid entry! "; // error message
        cout << "Enter a positive value for speed in mph: "; // re-enter speed
        cin >> speed;
    }
    
    
    // prompt the user to enter the hours for which the vehicle traveled and store its value
    cout << "Enter the number of hours for which this vehicle has travelled: ";
    cin >> time;
    
    // validating entry to ensure the time isnt less than an hour
    while (time < 1) {
        cout << "Invalid entry! "; // error message
        cout << "Enter a value for time greater than or equal to 1 hour: "; // re-enter time
        cin >> time;
    }
    
    
    // table headers for the output of hour and distance traveled
    cout << "Hour Distance Traveled" << endl;
    cout << "------------------------" << endl;
    
    // loop through each hour up to the total time, and calculate the distance traveled for each hour. then display results.
    while (num <= time) {
        cout << num << "\t\t" << (num*speed) << endl;
        num++;
    }
    
    
    return 0; // shows program has executed successfully.
}
