/* Name: Shriya Kalyan
 Course Name: Programming fundamentals
 Course Number: CS 1436
 Section: 005
 Date Completed: 09/03/24
 Date Submitted: 09/03/24
 */

#include <iostream>
using namespace std;


int main()
{
    // Constants from the survey data and declaration of variables.
    
    double total;
    double totalCitrusLovers;
    const int total_surveyed = 95400; // Number of customers who were surveyed in total.
    const float boughtEnergy = 0.18; // Percentage of customers who purchased one or more energy drinks per week.
    const float likeCitrus = 0.56; // Percentage of buyers who like citrus flavoured.
    
    
    
    // Calculating the number of customers that bought one or more energy drinks per week.
    
    total = static_cast<int>(total_surveyed * boughtEnergy); // Number of surveyed people who bought energy drinks.
    
    
    
    // Calculating the number of customers who bought energy drinks per week who like citrus flavoured drinks.
    
    totalCitrusLovers = static_cast<int>(total * likeCitrus); // Number of those who bought energy drinks who like citrus flavoured.
    
    
    
    // Print statements to output calculated results with clear annotations.
    
    cout << "The number of customers in the survey that purchased one or more";
    cout << " drinks per week is: " << total << endl;
    
    cout << "The number of customers who purchased drinks per week that like citrus";
    cout << " flavoured is: " << totalCitrusLovers << endl;
    
    return 0; // Shows the exam has been completed successfully.
}
