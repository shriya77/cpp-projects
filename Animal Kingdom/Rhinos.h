/* PSEUDOCODE
1. Define a class Rhinos that inherits from Animal.
    - Call the Animal constructor using an initializer list.
    - Print a message that this is the Rhino's default constructor.
    - Set picture to "Rhino", food to "Grass", hunger to 3, and boundaries to "Field".

2. Override the makeNoise function:
    - Print a message representing a rhino growl.

3. Override the eat function:
    - Print a message about rhino grazing behavior.
*/

#ifndef RHINOS_H
#define RHINOS_H

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Rhinos : public Animal {
public:

    // Constructor initializes Animal base and sets rhino-specific values
    Rhinos() : Animal() {
        cout << "From Rhino:--------- Default constructor" << endl;
        setPicture("Rhino");
        setFood("Grass");
        setHunger(3);
        setBoundaries("Field");
    }

    // Overrides makeNoise to simulate rhino sound
    void makeNoise() override {
        cout << "From Rhino:--------- Low growling" << endl;
    }

    // Overrides eat to describe rhino's eating behavior
    void eat() override {
        cout << "From Rhino:--------- Grazing on vegetation" << endl;
    }
};

#endif
