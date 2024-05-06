#include "Joueur.hpp"

int main() {
    Joueur joueur(12, 8);
    joueur.afficher();

    joueur.deplacer(2, -3);
    joueur.afficher();

    joueur.deplacer(-3, 6);
    joueur.afficher();

    return 0;
}