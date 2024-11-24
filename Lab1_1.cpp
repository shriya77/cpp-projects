/* Name: Shriya Kalyan
Course Name: Programming fundamentals
Course Number: CS 1436
Section: 005
Due Date: 09/03/24
Date Completed: 08/27/24
Date Submitted: 08/27/24 */

// This program displays the number of floors, rooms, and suites in a hotel.
// This program shows three variables defined on the same line.

#include <iostream> // this is the input-output stream library.
using namespace std;

int main() // main function
{
    /* Variables declared (given names) and defined (assigned values) to store
    the values of the numbers of floors, rooms, and suites in the hotel. */
    int numberOfFloors = 15; // Number of floors in the hotel.
    int numberOfRooms = 300; // Number of rooms in the hotel.
    int numberOfSuites = 30; // Number of suites in the hotel.

    /* cout is an object included in iostream and prints characters.
    These statements display the values with clear context. The variables
    are inserted in the middle of the string literal */
    cout << "The Grande Hotel has " << numberOfFloors << " floors.\n";
    cout << "With " << numberOfRooms << " rooms and " << numberOfSuites;
    cout << " suites.\n";

    return 0; // shows that the program ended successfully
} // end of function
