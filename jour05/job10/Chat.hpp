#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"
#include <string>

class Chat : public Animal {
public:
    Chat() {
        totalAnimaux++;
    }

    void crier() override {
        std::cout << "Miaou!" << std::endl;
    }

    void manger(std::string nourriture) override {
        if (nourriture == "des croquettes") {
            std::cout << "Le chat mange des croquettes." << std::endl;
        } else {
            std::cout << "Le chat mange du poisson." << std::endl;
        }
    }
};

#endif