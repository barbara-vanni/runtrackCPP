#ifndef OPERATION_HPP
#define OPERATION_HPP

#include <stdexcept>

class Operation {
public:
    int valeur;

    Operation(int valeur) : valeur(valeur) {}

    Operation operator+(const Operation& autre) {
        return Operation(this->valeur + autre.valeur);
    }

    Operation operator-(const Operation& autre) {
        return Operation(this->valeur - autre.valeur);
    }

    Operation operator*(const Operation& autre) {
        return Operation(this->valeur * autre.valeur);
    }

    Operation operator/(const Operation& autre) {
        if (autre.valeur != 0) {
            return Operation(this->valeur / autre.valeur);
        } else {
            throw std::invalid_argument("Division par zéro");
        }
    }
};

#endif