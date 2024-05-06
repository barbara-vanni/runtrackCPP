#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Etudiant {
public:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

    Etudiant(std::string nom, std::string prenom, int age, int matricule)
        : nom(nom), prenom(prenom), age(age), matricule(matricule) {}
};

#endif