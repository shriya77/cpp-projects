/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 11/04/24
Date Completed: 10/31/24
Date Submitted: 11/03/24

Program Purpose:
 The purpose of this program is to calculate the profit or loss from the sale of a stock. It takes in data related to stock transactions, such as the number of shares, purchase and sale prices, and commissions, to determine the financial outcome. If the result is positive, there was a profit; if negative, there was a loss.
*/

#include <iostream>  // include standard input-output library
using namespace std;  // dont have to use std:: before each standard library use

// function to calculate profit or loss from stock sale
double calculateProfit(int NS, double SP, double SC, double PP, double PC){
    double profit = ((NS * SP) * SC) * ((NS * PP) + PC);
    return profit;
}

// function to display results
void displayResults(double profit){
    if (profit < 0)
        cout << "the profit was " << profit << ", which means the sale is a loss." << endl;
    else if (profit > 0)
        cout << "the profit was " << profit << ", which means the sale is a profit." << endl;
    else
        cout << "there was no profit or loss from the sale." << endl;
}

int main(){
    int NS;  // number of shares
    double SP, SC, PP, PC;  // sale price, sale commission, purchase price, and purchase commission

    // get input from user for all data
    cout << "enter the number of shares: ";
    cin >> NS;
    cout << "enter the sale price per share: ";
    cin >> SP;
    cout << "enter the sale commission paid: ";
    cin >> SC;
    cout << "enter the purchase price per share: ";
    cin >> PP;
    cout << "enter the purchase commission paid: ";
    cin >> PC;

    // calculate profit and display results
    double profit = calculateProfit(NS, SP, SC, PP, PC);
    displayResults(profit);
    
    return 0;
}
