/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 10/15/24
Date Completed: 10/15/24
Date Submitted: 10/15/24

Program Purpose:
 The purpose of this program is to calculate the occupancy rate of a hotel. It prompts the user for the number of floors and the number of rooms and how many are occupied on each floor. It then calculates and displays the total number of rooms, the number of occupied and unoccupied rooms, and the percentage of rooms that are occupied.
*/

#include <iostream> // include the standard input-output stream library
using namespace std; // avoids using std:: before every standard library use

int main() { // main function
    int floors, rooms; // variables to store number of floors and total rooms
    int occupied, num, addRooms, addOccupied; // variables for occupied rooms and temporary storage for rooms per floor
    
    num = 1; // initialize num to start with the first floor
    rooms = 0; // initialize total rooms to 0
    floors = 0; // initialize total floors to 0
    
    cout << "How many floors does the hotel have: "; // prompt user for number of floors
    cin >> floors;
    
    if (floors < 1){ // check if number of floors is less than 1
        cout << "ERROR: invalid input, number of floors can't be less than one" << endl; // error message for invalid floors
        cout << "How many floors does the hotel have: "; // prompt again for valid input
        cin >> floors;
    }
    
    while (num <= floors){ // loop through each floor
        cout << "How many rooms does floor " << num << " have: "; // prompt for number of rooms on the current floor
        cin >> addRooms; // store input in addRooms
        rooms = rooms + addRooms; // add current floor's rooms to total rooms
        
        if (addRooms < 10){ // check if rooms are less than 10
            cout << "ERROR: invalid input, number of rooms can't be less than 10" << endl; // error message for invalid room count
            cout << "How many rooms does floor " << num << " have: "; // prompt again for valid input
            cin >> addRooms;
            rooms = rooms + addRooms; // add to total rooms
        }
        
        cout << "How many rooms in floor " << num << " are occupied: "; // prompt for number of occupied rooms
        cin >> addOccupied; // store input in addOccupied
        occupied = occupied + addOccupied; // add to total occupied rooms
        num++; // increment floor number by one to repeat loop
    }
    
    int unoccupied = rooms - occupied; // calculate unoccupied rooms
    float percentageOccupied = (occupied / (float)rooms) * 100; // calculate percentage of occupied rooms
    
    // display results
    cout << "The hotel has " << rooms << " rooms." << endl;
    cout << occupied << " rooms are occupied." << endl;
    cout << unoccupied << " rooms are unoccupied." << endl;
    cout << percentageOccupied << "% rooms are occupied" << endl;
    
    return 0; // shows program has been executed successfully
}

