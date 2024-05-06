#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
    static int totalAnimaux;

    virtual void crier() = 0;
    virtual void manger(std::string nourriture) = 0;  // Ajoutez le paramètre ici
};

int Animal::totalAnimaux = 0;

#endif