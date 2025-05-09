/* PSEUDOCODE
1. Define a class Animal with private data members:
    - picture (string), food (string), hunger (int), boundaries (string)

2. Provide:
    - A default constructor that sets default values.
    - A parameterized constructor that takes custom values.
    - A copy constructor to copy another Animal.

3. Declare virtual functions:
    - makeNoise (pure virtual) must be overridden in derived classes.
    - eat and roam: can be overridden in derived classes.
    - sleep and print: marked final, not allowed to be overridden further.

4. Provide public getter and setter functions for each private member.

5. Declare a friend function to overload the << operator for printing Animal data.
*/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string picture;
    string food;
    int hunger;
    string boundaries;

public:
    // Default constructor
    Animal();

    // Parameterized constructor
    Animal(string pic, string f, int h, string b);

    // Copy constructor
    Animal(const Animal& other);

    // Virtual functions
    virtual void makeNoise() = 0;
    virtual void eat();
    virtual void roam();

    // Final functions
    virtual void sleep() final;
    virtual void print() const final;

    // Getters
    string getPicture() const;
    string getFood() const;
    int getHunger() const;
    string getBoundaries() const;

    // Setters
    void setPicture(const string& pic);
    void setFood(const string& f);
    void setHunger(int h);
    void setBoundaries(const string& b);

    // Friend function to overload ostream operator
    friend ostream& operator<<(ostream& strm, const Animal& animal);
};

#endif