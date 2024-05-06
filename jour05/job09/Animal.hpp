#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
    static int totalAnimaux;

    virtual void crier() = 0;
    virtual void manger() = 0;
};

int Animal::totalAnimaux = 0;

#endif