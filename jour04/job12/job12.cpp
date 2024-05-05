#include <iostream>
#include <vector>
#include <string>



struct Staff {
    std::string nom;
    std::string prenom;
};

struct Etudiant {
    std::string nom;
    std::string prenom;
};

int main(){

    std::vector<Etudiant> etudiants;


    Staff staff[2] = {
        {"Cordial", "Alicia"},
        {"Malardier", "Pierre"},
  
    };

    for (int i = 0; i < 2; i++) {
        std::cout << "Staff " << i << ": "<< staff[i].nom << " " <<staff[i].prenom << std::endl;
    }

while (true) {
        std::cout << "1. Ajouter un etudiant\n2. Afficher une liste des etudiants\n3. Quitter\n";
        int choix;
        std::cin >> choix;

        switch(choix) {
            case 1: {
                std::cout << "Entrez le nom de l'etudiant : ";
                std::string nom;
                std::cin >> nom;
                std::cout << "Entrez le prenom de l'etudiant : ";
                std::string prenom;
                std::cin >> prenom;
                etudiants.push_back({nom, prenom});
                break;
            }
            case 2: {
                for (int i = 0; i < etudiants.size(); i++) {
                    std::cout << "Etudiant " << i << ": "<< etudiants[i].nom << " " << etudiants[i].prenom << std::endl;
                }
                break;
            }
            case 3: {
                return 0;
            }
        }

    }
}