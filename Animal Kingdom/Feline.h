/* PSEUDOCODE
1. Define a class Feline that inherits from Animal.
    - Use Animal's constructors with 'using'.
    - In the default constructor, print a message identifying this as a Feline.

2. Override makeNoise:
    - Print a message representing a purring sound.

3. Override eat:
    - Print a message describing how a feline eats.

4. Override roam:
    - Call Animal's roam() first.
    - Then print a feline-specific roaming message.
*/

#ifndef FELINE_H
#define FELINE_H

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Feline : public Animal {
public:
    using Animal::Animal; // Inherit constructors from Animal

    // Default constructor
    Feline() : Animal() {
        cout << "I am a feline!!\n";
    }

    // Overrides makeNoise to simulate purring
    void makeNoise() override {
        cout << "From Feline:--------- Purrr!" << endl;
    }

    // Overrides eat to describe feline behavior
    void eat() override {
        cout << "From Feline:--------- Clawing at food with paws" << endl;
    }
    
    // Overrides roam, first calling base roam then adding feline style
    void roam() override {
        Animal::roam();
        cout << "From Feline:--------- Wandering around alone silently" << endl;
    }
};

#endif 
