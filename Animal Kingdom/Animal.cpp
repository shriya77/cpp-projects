/* PSEUDOCODE
1. Define the Animal class's default constructor:
    - Print a message.
    - Initialize picture, food, hunger, and boundaries with default values.

2. Define a parameterized constructor:
    - Set each member variable to the given argument values.

3. Define a copy constructor:
    - Copy values from another Animal object.

4. Define virtual functions:
    - makeNoise: prints a general animal sound.
    - eat: prints a general eating behavior.
    - roam: prints a general roaming behavior.
    - sleep: prints a general sleep behavior.
    - print: prints the values of all member variables.

5. Define getters and setters for each member variable.

6. Define an overloaded << operator:
    - Allows printing an Animal object using cout.
*/

#include <iostream>
#include <string>

using namespace std;
#include "Animal.h"

// Default constructor: initializes members with default values
Animal::Animal() {
    cout << "From Animal:--------- Default constructor deployed" << endl;
    picture = "animal";
    hunger = 1;
    food = "human";
    boundaries = "Jungle";
}

// Parameterized constructor
Animal::Animal(string pic, string f, int h, string b) {
    picture = pic;
    food = f;
    hunger = h;
    boundaries = b;
}

// Copy constructor
Animal::Animal(const Animal& other){
    picture = other.picture;
    food = other.food;
    hunger = other.hunger;
    boundaries = other.boundaries;
}

// Virtual functions (default behavior)
void Animal::makeNoise(){
    cout << "From Animal:--------- Animal noises" << endl;
}

void Animal::eat(){
    cout << "From Animal:--------- Animal is eating" << endl;
}

void Animal::roam(){
    cout << "From Animal:--------- Animal is roaming" << endl;
}

// Final sleep method
void Animal::sleep(){
    cout << "From Animal:--------- Animal is sleeping" << endl;
}

// Final print method: prints all private members
void Animal::print() const {
    cout << "Picture: " << picture << endl;
    cout << "Food: " << food << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Boundaries: " << boundaries << endl;
}

// Getters
string Animal::getPicture() const{
    return picture;
}

string Animal::getFood() const{
    return food;
}

int Animal::getHunger() const{
    return hunger;
}

string Animal::getBoundaries() const{
    return boundaries;
}

// Setters
void Animal::setPicture(const string& pic){
    picture = pic;
}

void Animal::setFood(const string& f){
    food = f;
}

void Animal::setHunger(int h){
    hunger = h;
}

void Animal::setBoundaries(const string& b){
    boundaries = b;
}

// Overloaded ostream operator: prints Animal's data
ostream& operator<<(ostream& strm, const Animal& animal){
    strm << "Picture: " << animal.picture << endl;
    strm << "Food: " << animal.food << endl;
    strm << "Hunger: " << animal.hunger << endl;
    strm << "Boundaries: " << animal.boundaries << endl;

    return strm;
}
