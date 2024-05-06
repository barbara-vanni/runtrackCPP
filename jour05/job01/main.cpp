#include "Joueur.hpp"

int main() {
    Joueur joueur;
    joueur.x = 5;
    joueur.y = 5;
    joueur.afficher();

    joueur.deplacer(2, -3);
    joueur.afficher();

    joueur.deplacer(3, 3);
    joueur.afficher();

    return 0;
}