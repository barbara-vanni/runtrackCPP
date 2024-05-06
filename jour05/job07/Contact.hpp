#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
    std::string nom;
    int numero;

    Contact(std::string nom, int numero) : nom(nom), numero(numero) {}

    Contact(const Contact& autre) : nom(autre.nom), numero(autre.numero) {}
};

#endif