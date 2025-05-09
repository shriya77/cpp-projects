/* PSEUDOCODE
1. Define a class Lion that inherits from Canine.
    - Call the Canine constructor using an initializer list.
    - Print a message indicating this is a Lion class.
    - Set the picture attribute to "Lion".

2. Override the makeNoise function:
    - Print a message representing the lion's roar.
*/

#ifndef LION_H
#define LION_H

#include <iostream>
#include <string>
#include "Canine.h"

using namespace std;

class Lion : public Canine {
public:
    // Constructor calls Canine constructor and sets Lion-specific values
    Lion() : Canine() {
        cout << "I am a Lion class" << endl;
        setPicture("Lion");
    }

    // Overrides makeNoise to simulate a lion's roar
    void makeNoise() override {
        cout << "From Lion:--------- Roars majestically" << endl;
    }
};

#endif
