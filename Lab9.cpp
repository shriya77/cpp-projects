/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Due date: 10/04/24
 Date Completed: 09/26/24
 Date Submitted: 09/26/24
 
 Program Purpose:
 This program allows the user to enter the amount of calories and fat in food and uses that to calculate whether the food is low in fat.
 */


#include <iostream> // include the standard input-output stream library
using namespace std; // avoids using std:: before every standard library use


int main() // main function
{
    double calories, fat; // variables to store the number of calories and fat grams in a food.
    double fatCalories, percentage; // variables to store calories from fat and percentage of calories that are from fat in a food.
    
    
    // prompt user to enter the number of calories in their food
    cout << "Enter the number of calories in your food: ";
    cin >> calories;
    
    
    // check if the entered calories are valid (non-negative)
    if (calories <0){
        cout << "ERROR: The number of calories cannot be less than zero"; // display error message and terminate program
        return 1;
    }
    
    
    // prompt user to enter the number of fat grams in their food
    cout << "Enter the number of fat grams in your food: ";
    cin >> fat;
    
    
    // check if the entered fat grams are valid (non-negative)
    if (fat < 0){
        cout << "ERROR: The number of fat grams cannot be less than zero";
        return 1;
    }
    
    
    // calculate the number of calories that come from fat
    fatCalories = fat * 9;
    
    
    // check if the calories from fat exceed the total calories
    if (fatCalories > calories){
        cout << "ERROR: either the calories or fat grams were incorrectly entered. Please try again" << endl;
        return 1;
    }
    
    
    // calculate the percentage of calories that come from fat and display the result
    percentage = (fatCalories/calories) * 100;
    cout << "Percentage of calories from fat: " << percentage << "%" << endl;

    
    // determine if the food is low in fat and display result
    if (percentage < 30) {
        cout << "The food is low in fat." << endl;
    }
    
    
    return 0; // shows that the program has been executed successfully
}
