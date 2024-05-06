#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"

class Chien : public Animal {
public:
    void crier() override {
        std::cout << "Woof!" << std::endl;
    }

    void manger() override {
        std::cout << "Le chien a une alimentation variee." << std::endl;
    }
};

#endif