#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
public:
    int x, y;

    Joueur(int x = 0, int y = 0) : x(x), y(y) {}

    void afficher() {
        std::cout << "Position du joueur : (" << x << ", " << y << ")\n";
    }

    void deplacer(int dx, int dy) {
        x += dx;
        y += dy;
    }
};

#endif