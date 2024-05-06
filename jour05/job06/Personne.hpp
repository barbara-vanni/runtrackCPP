#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    Personne(std::string nom, int pointsDeVie, float defense)
        : nom(nom), pointsDeVie(pointsDeVie), defense(defense) {}

    void afficher() {
        std::cout << "Nom : " << nom << ", Points de vie : " << pointsDeVie << ", Defense : " << defense << std::endl;
    }

    void modifier(std::string nom, int pointsDeVie, float defense) {
        this->nom = nom;
        this->pointsDeVie = pointsDeVie;
        this->defense = defense;
    }
};

#endif