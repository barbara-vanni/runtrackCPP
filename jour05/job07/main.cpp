#include "Contact.hpp"
#include <iostream>

int main() {
    Contact contact1("Alice", 123456789);
    Contact copie1 = contact1;
    copie1.numero = 987654321;

    Contact contact2("Bob", 234567890);
    Contact copie2 = contact2;
    copie2.numero = 876543210;

    std::cout << "Contact 1 - Nom: " << contact1.nom << ", Numero: " << contact1.numero << std::endl;
    std::cout << "Copie 1 - Nom: " << copie1.nom << ", Numero: " << copie1.numero << std::endl;
    std::cout << "Contact 2 - Nom: " << contact2.nom << ", Numero: " << contact2.numero << std::endl;
    std::cout << "Copie 2 - Nom: " << copie2.nom << ", Numero: " << copie2.numero << std::endl;

    return 0;
}