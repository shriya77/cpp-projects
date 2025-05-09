/* PSEUDOCODE
1. Define a class Wolf that inherits from Canine.
    - Use the Canine constructor to initialize base class parts.
    - Print a message saying this is a Wolf class.
    - Set the picture attribute to "Wolf".

2. Override the makeNoise function:
    - Print a message indicating the wolf howls.
*/

#ifndef WOLF_H
#define WOLF_H

#include <iostream>
#include <string>
#include "Canine.h"

using namespace std;

class Wolf : public Canine {
public:
    // Constructor that calls base Canine constructor and sets picture
    Wolf() : Canine() {
        cout << "I am a Wolf class" << endl;
        setPicture("Wolf");
    }

    // Overrides the Canine's makeNoise function
    void makeNoise() override {
        cout << "From Wolf:--------- Howls" << endl;
    }
};

#endif
