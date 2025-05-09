/* PSEUDOCODE
1. Define a class Dog that inherits from Canine.
    - Call the Canine constructor using an initializer list.
    - Print a message indicating this is a Dog class.
    - Set the picture attribute to "Dog".

2. Override the makeNoise function:
    - Print a message representing a dog's bark.
*/

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Canine.h"

using namespace std;

class Dog : public Canine {
public:
    // Constructor calls Canine constructor and sets Dog-specific picture
    Dog() : Canine() {
        cout << "I am a Dog class" << endl;
        setPicture("Dog");
    }

    // Overrides makeNoise to simulate a dog's bark
    void makeNoise() override {
        cout << "From Dog:--------- Woof Woof!" << endl;
    }
};

#endif
