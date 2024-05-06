#include "Chien.hpp"
#include "Chat.hpp"
#include <iostream>

int main() {
    Chien chien1, chien2;
    Chat chat1, chat2, chat3;

    std::cout << "Total d'animaux : " << Animal::totalAnimaux << std::endl;

    chat1.manger("des croquettes");
    chat2.manger("du poisson");
    chien2.manger("autre chose");

    return 0;
}