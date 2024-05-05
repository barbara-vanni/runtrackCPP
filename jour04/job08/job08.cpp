#include <iostream>

struct MixedType {
    int entier;
    std::string chaine1;
    float flottant;
    std::string chaine2;
};

int main() {
    MixedType arr[4] = {
        {219,"La Plateforme", 3.14, "Etudiants"}
    };


    for (int i = 0; i < 4; i++) {
        std::cout << "Adresse " << i << ": "<< &arr[i] << std::endl;
    }

    std::cout << "Valeur de l'entier :" << arr[0].entier << std::endl;
    std::cout << "Valeur de la chaine1 :" << arr[0].chaine1 << std::endl;
    std::cout << "Valeur du flottant :" << arr[0].flottant << std::endl;
    std::cout << "Valeur de la chaine2 :" << arr[0].chaine2 << std::endl;

    return 0;
}