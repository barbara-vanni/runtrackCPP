#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>

class Joueur {
public:
    int x, y;
    std::string nom;

    Joueur() : x(0), y(0) {} 

    Joueur(int x, int y) : x(x), y(y) {}  

    Joueur(int x, int y, std::string nom) : x(x), y(y), nom(nom) {}

    void afficher() {
        std::cout << "Joueur " << nom << " - Position : (" << x << ", " << y << ")\n";
    }

    void deplacer(int dx, int dy) {
        x += dx;
        y += dy;
    }
};

#endif