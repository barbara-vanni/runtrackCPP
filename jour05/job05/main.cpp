#include "Etudiant.hpp"
#include <iostream>

int main() {
    Etudiant etudiant1("Neutron", "Jimmy", 22, 536);
    Etudiant etudiant2("Dede", "Cochon", 21, 537);
    Etudiant etudiant3("Smith", "Patrick", 53, 538);

    std::cout << "Etudiant 1 - Nom: " << etudiant1.nom << ", Prenom: " << etudiant1.prenom << ", Age: " << etudiant1.age << ", Matricule: " << etudiant1.matricule << std::endl;
    std::cout << "Etudiant 2 - Nom: " << etudiant2.nom << ", Prenom: " << etudiant2.prenom << ", Age: " << etudiant2.age << ", Matricule: " << etudiant2.matricule << std::endl;
    std::cout << "Etudiant 3 - Nom: " << etudiant3.nom << ", Prenom: " << etudiant3.prenom << ", Age: " << etudiant3.age << ", Matricule: " << etudiant3.matricule << std::endl;

    return 0;
}