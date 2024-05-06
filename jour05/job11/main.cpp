#include "Operation.hpp"
#include <iostream>

int main() {
    Operation op1(10);
    Operation op2(5);

    Operation somme = op1 + op2;
    Operation difference = op1 - op2;
    Operation produit = op1 * op2;
    Operation quotient = op1 / op2;

    std::cout << "Somme : " << somme.valeur << std::endl;
    std::cout << "Difference : " << difference.valeur << std::endl;
    std::cout << "Produit : " << produit.valeur << std::endl;
    std::cout << "Quotient : " << quotient.valeur << std::endl;

    return 0;
}