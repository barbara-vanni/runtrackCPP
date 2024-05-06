#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal {
public:
    void crier() override {
        std::cout << "Miaou!" << std::endl;
    }

    void manger() override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

#endif

