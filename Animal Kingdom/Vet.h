/* PSEUDOCODE
1. Define a class Vet that inherits from Animal.
    - In the constructor, print a message that this is a Vet class.

2. Define the giveShot function:
    - Take an Animal reference as input.
    - Call the makeNoise function on that Animal.
*/

#ifndef VET_H
#define VET_H

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Vet : public Animal {
public:
    // Constructor prints a message when a Vet object is created
    Vet() {
        cout << "I am a Vet class" << endl;
    }

    // Calls the makeNoise function of the Animal passed in
    void giveShot(Animal &a) {
        a.makeNoise();
    }
};

#endif
