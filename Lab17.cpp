/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 11/02/24
Date Completed: 10/29/24
Date Submitted: 11/02/24

Program Purpose:
 This program allows the user to enter the number of rooms that are to be painted and the price of the paint per gallon. It will also ask for the square feet of wall space in each room. It will then display the number of gallons of paint required, hours of labour required, cost of paint, labour cost and total cost of job.
*/

#include <iostream> // include input-output stream library
#include <iomanip> // to use setprecision()
using namespace std; // to avoid using std:: before every standard library use

// constants
const double paint_coverage = 115.0; // square feet covered by one gallon of paint
const double hours_per_gallon = 8.0; // labor hours per gallon of paint
const double labor_cost_per_hour = 18.0; // cost of labor per hour

int main() {
    int rooms;
    double paint_price, total_wall_space = 0.0;

    // getting number of rooms from user
    do {
        cout << "enter the number of rooms to be painted: ";
        cin >> rooms;
        if (rooms < 1) { // input validation
            cout << "ERROR: number of rooms must be at least 1" << endl;
        }
    } while (rooms < 1);

    // getting price of paint from user
    do {
        cout << "enter the price of the paint per gallon: $";
        cin >> paint_price;
        if (paint_price < 10.0) { //input validation
            cout << "ERROR: price of paint must be at least $10.00.\n";
        }
    } while (paint_price < 10.0);

    // getting wall space from user
    for (int i = 1; i <= rooms; i++) {
        double wall_space;
        do {
            cout << "enter the square feet of wall space in room " << i << ": ";
            cin >> wall_space;
            if (wall_space < 0) { // input validation
                cout << "ERROR: wall space cannot be negative.\n";
            }
        } while (wall_space < 0);
        total_wall_space += wall_space;
    }

    // calculations
    double gallons = total_wall_space / paint_coverage;
    double labor_hours = gallons * hours_per_gallon;
    double paint_cost = paint_price * gallons;
    double labor_cost = labor_hours * labor_cost_per_hour;
    double total_cost = paint_cost + labor_cost;

    // display results to 2dp
    cout << fixed << setprecision(2) << endl;
    
    // display results
    cout << "\nresults:\n";
    cout << "the number of gallons of paint required is: " << gallons << endl;
    cout << "the hours of labor required is: " << labor_hours << endl;
    cout << "the cost of the paint is: $" << paint_cost << endl;
    cout << "the labor charges are: $" << labor_cost << endl;
    cout << "the total cost of the paint job is: $" << total_cost << endl;

    return 0; // shows program has been executed successfully
}
