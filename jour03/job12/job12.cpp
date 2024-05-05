#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); 

    int nombreMystere = rand() % 101; 
    int nombreChoisi;
    int nombreDeChances = 10; 

    std::cout << "Bienvenue dans le jeu du nombre mystere ! Vous avez " << nombreDeChances << " chances pour deviner un nombre entre 0 et 100." << std::endl;

    for (int i = 0; i < nombreDeChances; i++) {
        std::cout << "Entrez un nombre : ";
        std::cin >> nombreChoisi;

        if (nombreChoisi < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
        } else if (nombreChoisi > nombreMystere) {
            std::cout << "Trop grand !" << std::endl;
        } else {
            std::cout << "Felicitations, vous avez devine le nombre mystere !" << std::endl;
            return 0;
        }
    }

    std::cout << "Desole, vous avez epuise toutes vos chances. Le nombre mystere etait " << nombreMystere << "." << std::endl;

    return 0;
}