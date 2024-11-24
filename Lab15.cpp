/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 10/28/24
Date Completed: 10/24/24
Date Submitted: 10/24/24

Program Purpose:
 This program generates random numbers, saves them to a file named random.txt, and then processes that file to count the numbers, find the largest and smallest numbers, calculate the total, and find the average.
*/

#include <iostream>  // include the standard input-output stream library
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <fstream> // to open a file, connect and read and write data to it
#include <limits> // for numeric limits
using namespace std;  // avoids using std:: before every standard library use

int main() {  // main function
    // variables for random number generation
    int MIN1, MAX1, programNumber;
    
    // minimum and maximum values for range for random number generation
    const int first_min = 1;
    const int first_max = 100;
    const int second_min = 500;
    const int second_max = 5000;
    const int file_min = 100;
    const int file_max = 2000;
    
    // to keep track of how many numbers have been generated
    int num = 1;

    // seed random number generator
    unsigned seed = time(0);
    srand(seed);

    // generate MIN1, MAX1, and programNumber
    MIN1 = rand() % (first_max - first_min + 1) + first_min;
    MAX1 = rand() % (second_max - second_min + 1) + second_min;
    programNumber = rand() % (MAX1 - MIN1 + 1) + MIN1;

    // printing numbers generated
    cout << "MIN1 was: " << MIN1 << " and MAX1 was: " << MAX1 << endl;
    cout << "Number of random numbers to generate: " << programNumber << endl;

    // open file to save random numbers
    ofstream outfile("random.txt");
    
    // generate random numbers between 100 and 2000 and save to file
    while (num <= programNumber){
        int number = rand() % (file_max - file_min + 1) + file_min;
        outfile << number << endl;
        num++;
    }
    
    // close the output file
    outfile.close();

    // open file for reading and process it
    ifstream infile("random.txt");
    
    // variables to process the numbers
    int count = 0;
    int number;
    int total = 0;
    int largest = 100;
    int smallest = 2000;

    // read numbers from file and process
    while (infile >> number) {
        count++;               // increment count
        total += number;       // add to total
        if (number > largest)  // check for largest number
            largest = number;
        if (number < smallest) // check for smallest number
            smallest = number;
    }

    infile.close();  // close the input file

    // calculate average
    double average = static_cast<double>(total) / count;

    // print results
    cout << "Total numbers: " << count << endl;
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    cout << "Total of numbers: " << total << endl;
    cout << "Average of numbers: " << average << endl;

    return 0; // shows program has been executed successfully
}

