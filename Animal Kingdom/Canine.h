/* PSEUDOCODE
1. Define a class Canine that inherits from Animal.
    - Use 'using Animal::Animal' to inherit constructors.
    - In the default constructor, print a message identifying the Canine class.

2. Override makeNoise:
    - Print a growling sound representing a canine.

3. Override eat:
    - Print a message describing how a canine eats meat.

4. Override roam:
    - Call Animal's roam function.
    - Then print a message about pack behavior.
*/

#ifndef CANINE_H
#define CANINE_H

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Canine : public Animal {
public:
    using Animal::Animal; // inherits Animal's constructors 

    // Default constructor prints identification
    Canine() : Animal() {
        cout << "I am a canine!!\n";
    }

    // Overrides makeNoise with canine growl
    void makeNoise() override {
        cout << "From Canine:--------- Grrrrr!" << endl;
    }

    // Overrides eat with meat-eating behavior
    void eat() override {
        cout << "From Canine:--------- Tearing through the meat" << endl;
    }

    // Overrides roam, calls base roam, then adds pack behavior
    void roam() override {
        Animal::roam();
        cout << "From Canine:--------- Roaming with pack" << endl;
    }
};

#endif 
