/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Due date: 9/23/24
 Date Completed: 09/19/24
 Date Submitted: 09/19/24
 
 Program Purpose:
 This program gives the user the option to perform three different geometric calculations including the area of a circle, area of a rectangle and the area of a triangle.
 */

#include <iostream> // include the standard input-output stream library
#include <cmath> // for pow()
#include <iomanip> // for set.precision()

using namespace std; // avoids using std:: before every standard library use


int main() // main function
{
    int choice; // stores the user's menu selection
    double circle, rectangle, triangle; // variables for storing areas of different shapes
    double radius, length, width, base, height; // variables for dimensions of shapes (circle, rectangle, triangle)
    
    
    const double pi = 3.14159; // constant value of pi, needed for calculating the area of the circle
    
    
    // displaying the menu options to the user
    cout << "1. Calculate the Area of a Circle \n";
    cout << "2. Calculate the Area of a Rectangle \n";
    cout << "3. Calculate the Area of a Triangle \n";
    cout << "4. Quit" << endl;
    
    
    // asking for user's choice
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    
    // setting precision of output values to 2 decimal places
    cout << fixed << setprecision(2);

    
    // calculate the area of a circle if the user chooses option 1
    if (choice == 1){
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        // validate that the radius is not negative
        if (radius < 0){
            cout << "ERROR: The value you have entered cannot be negative" << endl;
            return 1; // exit program with error message
        }
        // calculate the area of the circle and print the result
        circle = pi * pow((radius), 2);
        cout << "The area of the circle is: " << circle;
    }
    // calculate the area of a rectangle if the user chooses option 2
    else if (choice == 2){
        cout << "Enter the width and length of the rectangle (width length): ";
        cin >> width >> length;
        // validate that neither the width nor length are negative
        if (width < 0){
            cout << "ERROR: The value you have entered cannot be negative" << endl;
            return 1; // exit program with error message
        }
        if (length < 0){
            cout << "ERROR: The value you have entered cannot be negative" << endl;
            return 1; // exit program with error message
        }
        // calculate the area of the rectangle and print the result
        rectangle = width * length;
        cout << "The area of the rectangle is: " << rectangle;
    }
    // calculate the area of a triangle if the user chooses option 3
    else if (choice == 3){
        cout << "Enter the base and height of the triangle (base height): ";
        cin >> base >> height;
        // validate that neither the base nor the height are negative
        if (base < 0){
            cout << "ERROR: The value you have entered cannot be negative" << endl;
            return 1; // exit program with error message
        }
        if (height < 0){
            cout << "ERROR: The value you have entered cannot be negative" << endl;
            return 1; // exit program with error message
        }
        // calculate the area of the triangle and print the result
        triangle = 0.5 * base * height;
        cout << "The area of the triangle is: " << triangle;
    }
    // exit the program if the user chooses option 4
    else if (choice == 4){
        return 0; // shows the program has been exited successfully
    }
    // validating the user's input to ensure it is one of the menu options
    else {
        cout << "ERROR: Input a valid number that is 1,2,3 or 4";
        return 1; // exit program with error message
    }

}


