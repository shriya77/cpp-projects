/* PSEUDOCODE
1. Define a class Tiger that inherits from Feline.
    - Call the Feline constructor using an initializer list.
    - Print a message indicating this is a Tiger class.
    - Set the picture attribute to "Tiger".

2. Override the makeNoise function:
    - Print a custom growling message specific to a tiger.
*/

#ifndef TIGER_H
#define TIGER_H

#include <iostream>
#include <string>
#include "Feline.h"

using namespace std;

class Tiger : public Feline {
public:
    // Constructor calls Feline constructor and sets picture
    Tiger() : Feline() {
        cout << "I am a Tiger class" << endl;
        setPicture("Tiger");
    }

    // Overrides makeNoise to simulate a tiger growl
    void makeNoise() override {
        cout << "From Tiger:--------- Snares its teeth while growling" << endl;
    }
};

#endif
