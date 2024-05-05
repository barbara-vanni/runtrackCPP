#include <iostream>
#include <vector>
#include <string>

struct Destination {
    std::string nom;
    double tempsDeVol;
};

int main() {
    std::vector<Destination*> destinations;

    while (true) {
        std::cout << "1. Ajouter une destination\n2. Afficher les destinations\n3. Modifier une destination\n4. Quitter\n";
        int choix;
        std::cin >> choix;

        switch (choix) {
            case 1: {
                Destination* destination = new Destination;
                std::cout << "Entrez le nom de la destination : ";
                std::cin >> destination->nom;
                std::cout << "Entrez le temps de vol depuis Marseille : ";
                std::cin >> destination->tempsDeVol;
                destinations.push_back(destination);
                break;
            }
            case 2: {
                for (Destination* destination : destinations) {
                    std::cout << "Destination : " << destination->nom << ", Temps de vol : " << destination->tempsDeVol << std::endl;
                }
                break;
            }
            case 3: {
                std::string nom;
                std::cout << "Entrez le nom de la destination que vous voulez modifier : ";
                std::cin >> nom;
                for (Destination* destination : destinations) {
                    if (destination->nom == nom) {
                        std::cout << "Entrez le nouveau nom de la destination : ";
                        std::cin >> destination->nom;
                        std::cout << "Entrez le nouveau temps de vol depuis Marseille : ";
                        std::cin >> destination->tempsDeVol;
                        break;
                    }
                }
                break;
            }
            case 4: {
                for (Destination* destination : destinations) {
                    delete destination;
                }
                return 0;
            }
        }
    }
}