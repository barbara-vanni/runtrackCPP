#include "Joueur.hpp"

int main() {
    Joueur joueur1;
    joueur1.afficher();

    Joueur joueur2(5, 5);
    joueur2.afficher();

    Joueur joueur3(10, 10, "Bumblebee");
    joueur3.afficher();

    return 0;
}