/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 10/23/24
Date Completed: 10/22/24
Date Submitted: 10/22/24

Program Purpose:
 The purpose of this program is to prompt the user to enter the population of 10 cities in texas. It then generates a bar chart to compare the population of these cities.
*/

#include <iostream>  // include the standard input-output stream library
#include <fstream> // to open a file, connect and read and write data to it
using namespace std;  // avoids using std:: before every standard library use

int main() {  // main function
    int cit1, cit2, cit3, cit4, cit5, cit6, cit7, cit8, cit9, cit10;  // individual variables for each city's population
    ofstream outFile("Shriya_PopulationChart.txt");  // output file

    // input population for each city
    cout << "Enter the population of Texas City 1: "; cin >> cit1;
    cout << "Enter the population of Texas City 2: "; cin >> cit2;
    cout << "Enter the population of Texas City 3: "; cin >> cit3;
    cout << "Enter the population of Texas City 4: "; cin >> cit4;
    cout << "Enter the population of Texas City 5: "; cin >> cit5;
    cout << "Enter the population of Texas City 6: "; cin >> cit6;
    cout << "Enter the population of Texas City 7: "; cin >> cit7;
    cout << "Enter the population of Texas City 8: "; cin >> cit8;
    cout << "Enter the population of Texas City 9: "; cin >> cit9;
    cout << "Enter the population of Texas City 10: "; cin >> cit10;

    // output population bar chart to file
    outFile << "POPULATION BAR CHART\n";
    outFile << "(Each * = 1000)\n";

    // for each city, calculate the number of asterisks and output them
    outFile << "CITY 1: "; for (int i = 0; i < cit1 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 2: "; for (int i = 0; i < cit2 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 3: "; for (int i = 0; i < cit3 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 4: "; for (int i = 0; i < cit4 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 5: "; for (int i = 0; i < cit5 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 6: "; for (int i = 0; i < cit6 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 7: "; for (int i = 0; i < cit7 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 8: "; for (int i = 0; i < cit8 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 9: "; for (int i = 0; i < cit9 / 1000; i++) outFile << "*"; outFile << endl;
    outFile << "CITY 10: "; for (int i = 0; i < cit10 / 1000; i++) outFile << "*"; outFile << endl;

    cout << "Population chart saved to Shriya_PopulationChart.txt." << endl;

    outFile.close();  // to close the file
    return 0;  // shows program has been executed successfully
}
