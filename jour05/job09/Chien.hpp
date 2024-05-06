#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"

class Chien : public Animal {
public:
    Chien() {
        totalAnimaux++;
    }

    void crier() override {
        std::cout << "Woof!" << std::endl;
    }

    void manger() override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

#endif