/* Name: Shriya Kalyan
Course Name: Programming fundamentals
Course Number: CS 1436
Section: 005
Due Date: 09/03/24
Date Completed: 08/27/24
Date Submitted: 08/27/24 */


//This program calculates the user's pay.

#include <iostream> //this is the input-output stream library.
using namespace std; 

int main() //main function is being defined.
{
    //variables to store hours worked, hourly pay rate, and total pay.
    double hoursWorked; //variable for number of hours worked.
    double rateOfPay; //variable for hourly pay rate.
    double totalPay; //variable for total pay calculated.

    //Get the number of hours worked from user using prompt.
    cout << "Enter the number of hours you have worked";
    cin >> hoursWorked; //character input from user's response.

    //Get the user's hourly pay rate using prompt.
    cout << "Enter your hourly pay in dollars: $";
    cin >> rateOfPay; //character input from user's response.

    //Calculate the user's total pay by multiplying hours worked by hourly pay rate.
    totalPay = hoursWorked * rateOfPay;

    //Display pay calculated previously with a message.
    cout << "You earned a total of $" << totalPay << " for your work." << endl;

    return 0; //shows the program ended successfully.
}
