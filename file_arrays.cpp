/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 11/18/24
Date Completed: 11/12/24
Date Submitted: 11/18/24

Program Purpose:
The program generates 100 random bonus points in the range of 50 to 1200, writes them to a file,
reads them back into a 10x10 2D array, and performs operations using several functions to calculate total and average of all values, totals for specific rows and columns and highest and lowest values in specific rows.
*/

#include <iostream> // include input-output stream library
#include <fstream>  // file handling
#include <ctime>    // for time()
#include <cstdlib>  // for srand and rand
#include <iomanip>  // for formatted output
using namespace std; // dont have to use std:: before every standard library use

// function definitions
int getTotal(const int array[10][10]) {
    int total = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            total += array[i][j];
    return total;
}

double getAverage(const int array[10][10]) {
    int total = getTotal(array);
    return static_cast<double>(total) / (10 * 10);
}

int getRowTotal(const int array[10][10], int row) {
    int total = 0;
    for (int j = 0; j < 10; j++)
        total += array[row][j];
    return total;
}

int getColumnTotal(const int array[10][10], int col) {
    int total = 0;
    for (int i = 0; i < 10; i++)
        total += array[i][col];
    return total;
}

int getHighestInRow(const int array[10][10], int row) {
    int highest = array[row][0];
    for (int j = 1; j < 10; j++)
        if (array[row][j] > highest)
            highest = array[row][j];
    return highest;
}

int getLowestInRow(const int array[10][10], int row) {
    int lowest = array[row][0];
    for (int j = 1; j < 10; j++)
        if (array[row][j] < lowest)
            lowest = array[row][j];
    return lowest;
}

int main() {
    const int ROWS = 10, COLS = 10;
    int points[ROWS][COLS];
    const int BONUS_MIN = 50, BONUS_MAX = 1200;

    // generate random numbers and write them to the file
    unsigned seed = time(0);
    srand(seed);
    ofstream outfile("bonus_points.txt"); // file that generated numbers will be stored in

    if (!outfile) {
        cerr << "Error: Could not create file.\n";
        return 1;
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            points[i][j] = rand() % (BONUS_MAX - BONUS_MIN + 1) + BONUS_MIN;
            outfile << points[i][j] << " ";
        }
        outfile << endl;
    }

    outfile.close();

    // open file for reading
    ifstream infile("bonus_points.txt");
    if (!infile) {
        return 1;
    }

    // read file into array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            infile >> points[i][j];
        }
    }

    infile.close();

    // displaying array for verification
    cout << "2D Array (Bonus Points):" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(5) << points[i][j] << " ";
        }
        cout << endl;
    }

    // get user input to decide row and column number
    int row, col;

    cout << "Enter a row index (0-9): ";
    cin >> row;

    cout << "Enter a column index (0-9): ";
    cin >> col;

    // use functions to get values needed
    cout << "Total of all values: " << getTotal(points) << endl;
    cout << "Average of all values: " << fixed << setprecision(2) << getAverage(points) << endl;

    cout << "Total of row " << row << ": " << getRowTotal(points, row) << endl;
    cout << "Total of column " << col << ": " << getColumnTotal(points, col) << endl;

    cout << "Highest in row " << row << ": " << getHighestInRow(points, row) << endl;
    cout << "Lowest in row " << row << ": " << getLowestInRow(points, row) << endl;

    return 0; // shows program has been executed successfully
}
