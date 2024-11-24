/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Due date: 9/25/24
 Date Completed: 09/24/24
 Date Submitted: 09/24/24
 
 Program Purpose:
 This program allows the user to select a gas from the menu options and then input the amount of time taken for the sound to travel through that gas. It will then calculate the total distance travelled by the sound.
 */

#include <iostream> // include the standard input-output stream library
#include <iomanip> // for formatting

using namespace std; // avoids using std:: before every standard library use

int main()
{
    float time, distance; // variables for time and distance
    int gasChoice; // variable for gas selection

    // display gas options
    cout << "1. Carbon Dioxide\n";
    cout << "2. Air\n";
    cout << "3. Helium\n";
    cout << "4. Hydrogen\n";
    
    // input for gas choice
    cout << "Select the gas through which the sound traveled (1-4): ";
    cin >> gasChoice;
    
    // validate the gas choice
    if (gasChoice != 1 && gasChoice != 2 && gasChoice != 3 && gasChoice != 4) {
        // invalid gas choice input
        cout << "ERROR: Enter a valid number between 1-4.";
        return 1; // exit the program if gasChoice is invalid
    }
    
    // input for time taken by sound
    cout << "Enter the number of seconds taken for sound to travel (0-30): ";
    cin >> time;
    
    // check if time is within the valid range
    if (time < 0 || time > 30) {
        cout << "ERROR: Time must be between 0 and 30 seconds.";
        return 1; // exit the program if time is invalid
    }

    // calculate distance based on the gas selected
    if (gasChoice == 1) {
        distance = 258.0 * time;
        cout << "The sound traveled " << distance << " metres.";
    }
    else if (gasChoice == 2) {
        distance = 331.5 * time;
        cout << "The sound traveled " << distance << " metres.";
    }
    else if (gasChoice == 3) {
        distance = 972.0 * time;
        cout << "The sound traveled " << distance << " metres.";
    }
    else if (gasChoice == 4) {
        distance = 1270.0 * time;
        cout << "The sound traveled " << distance << " metres.";
    }

    return 0; // successful program termination
}
