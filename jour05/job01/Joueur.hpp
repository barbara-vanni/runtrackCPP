#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
public:
    int x, y;

    Joueur() {}

    void afficher() {
        std::cout << "Position du joueur : (" << x << ", " << y << ")\n";
    }

    void deplacer(int dx, int dy) {
        x += dx;
        y += dy;
    }
};

#endif