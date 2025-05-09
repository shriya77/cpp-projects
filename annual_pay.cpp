/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Due date: 9/11/24
 Date Completed: 09/05/24
 Date Submitted: 09/05/24
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    // Declaring variables and initializing the constant.
    double payAmount; // amount of pay the employee earns each pay period.
    const int payPeriods = 26; // number of pay periods in a year.
    double annualPay; // employee's total annual pay.
    
    
    // Getting the user's salary per pay period and storing it in the variable payAmount.
    cout << "Please type your pay for each pay period: $ ";
    cin >> payAmount;
    
    
    // Calculating annual pay.
    annualPay = payAmount * payPeriods;
    
    
    // Print statements to output calculated annual pay with clear annotations.
    cout << fixed << setprecision(2); // Setting output to 2 decimal places
    cout << "Your total annual pay is: $" << annualPay << endl;
    
    return 0; // shows the program has been executed successfully.
}
