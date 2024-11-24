/*
Name: Shriya Kalyan
Course Name: Programming Fundamentals
Course Number: CS 1436
Section: 005
Due Date: 11/23/24
Date Completed: 11/12/24
Date Submitted: 11/16/24

Program Purpose:
The program calculates the average test scores of five students based on their four test scores,
drops the lowest test score for each student, and assigns a letter grade based on the average.
*/

#include <iostream> // include standard input-output library
#include <string> // for string handling
#include <iomanip> // for formatting the output
using namespace std; // to avoid using std:: before every standard library use

// calculates the average after removing the lowest score
double calculateAverage(double scores[], int size) {
    double lowest = scores[0]; // keep track of the lowest score
    double sum = 0; // for the total of all scores

    // loop through scores to find the lowest and calculate the total
    for (int i = 0; i < size; i++) {
        sum += scores[i]; // add score to total
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    // subtract the lowest score from the total and divide by remaining tests
    return (sum - lowest) / (size - 1);
}

// assigns a letter grade based on the average score
char assignGrade(double average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    const int numStudents = 5; // number of students
    const int numTests = 4; // number of test scores per student

    string students[numStudents]; // array for student names
    double scores[numStudents][numTests]; // 2d array for test scores
    char grades[numStudents]; // array for letter grades

    // input names and scores for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, students[i]); // read the full name including spaces

        for (int j = 0; j < numTests; j++) {
            do {
                // prompt for test score
                cout << "Enter " << students[i] << "'s score for test " << j + 1 << ": ";
                cin >> scores[i][j]; // store test score

                // check for invalid scores and prompt again if necessary
                if (scores[i][j] < 0 || scores[i][j] > 100) {
                    cout << "error: invalid test score. please enter a score between 0 and 100." << endl;
                }
            } while (scores[i][j] < 0 || scores[i][j] > 100); // repeat if score is invalid
        }
    }

    // calculate averages and assign grades
    for (int i = 0; i < numStudents; i++) {
        double average = calculateAverage(scores[i], numTests); // calculate average after dropping the lowest
        grades[i] = assignGrade(average); // get the corresponding letter grade

        // display results for the student
        cout << fixed << setprecision(2); // format to 2 decimal places
        cout << "\nStudent: " << students[i];
        cout << "\nAverage Score (after dropping lowest): " << average;
        cout << "\nLetter Grade: " << grades[i] << endl;
    }

    return 0; // shows the program has been executed successfully
}
