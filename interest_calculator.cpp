/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Due date: 9/18/24
 Date Completed: 09/12/24
 Date Submitted: 09/12/24
 
 Program Purpose:
 This program calculates a monthly payment, interest paid and amount paid back for a loan.
 The user is prompted to enter the monthly interest rate and the number of payments. The program uses this to calculate the other three values. The loan amount is randomly generated.
 */

#include <iostream> // include the standard input-output stream library
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include <cmath> // for pow()
#include <iomanip> // for set.precision()

using namespace std; // avoids using std:: before every standard library use


int main ()
{
    // defining constants for the minimum and maximum loan amounts
    const int MIN_LOAN = 8000; //
    const int MAX_LOAN = 15000;
    
    
    // declaring variables
    double interestAnnual, interestMonthly, loan; // the annual interest rate, monthly intrest rate and loan amount
    int payments; // the number of payments
    double monthlyPay, paidBack, interestPaid; // the monthly payment, amount paid back overall and interest paid
    
    
    // prompt the user to input the annual interest rate
    cout << "Please enter your annual interest rate (%): ";
    cin >> interestAnnual;
    
    
    // prompt the user to enter the number of payments
    cout << "Please enter the number of loan payments you have: ";
    cin >> payments;
    
    
    // generating a random loan amount between MIN_LOAN and MAX_LOAN
    unsigned seed = time(0); // using the current time to seed random number generator
    srand(seed); // seed the random number generator
    loan = rand() % (MAX_LOAN - MIN_LOAN + 1) + MIN_LOAN; // generate a random loan amount in the specified range
    
    
    // calculating the monthly interest rate from the annual interest rate
    interestMonthly = (interestAnnual/100)/12;
    
    
    // calculating the monthly amount paid using the formula
    monthlyPay = ((interestMonthly * pow((1 + interestMonthly), payments))/(pow(1 + interestMonthly, payments) - 1)) * loan;
    
    
    // calculating the total amount paid back by multiplying the monthly payment by the number of payments
    paidBack = monthlyPay * payments;
    
    
    // calculating the total interest paid by subtracting the loan amount from the amount paid back
    interestPaid = paidBack - loan;
    
    
    // setting the output format to display 2 decimal places
    cout << fixed << setprecision(2);
    
    
    // displaying the results as a report with context
    cout << "Loan Amount: $" << loan << "\n";
    cout << "Monthly Interest Rate: " << interestMonthly * 100 << "%\n";
    cout << "Number of Payments: " << payments << "\n";
    cout << "Monthly Payment: $" << monthlyPay << "\n";
    cout << "Amount Paid Back: $" << paidBack << "\n";
    cout << "Interest Paid: $" << interestPaid << "\n";
    
    
    return 0; // shows the program has been executed successfully
    
}
