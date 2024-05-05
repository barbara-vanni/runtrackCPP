#include <iostream>
#include <vector>
#include <string>
#include <numeric>

struct Note {
    std::string nom;
    std::string prenom;
    double note;
};

int main() {
    std::vector<Note> notes;

    while (true) {
        std::cout << "1. Ajouter une note\n2. Afficher une liste de note\n3. Supprimer une note d'un étudiant\n4. Afficher la moyenne des notes\n5. Quitter\n";
        int choix;
        std::cin >> choix;

        switch (choix) {
            case 1: {
                Note note;
                std::cout << "Entrez le nom : ";
                std::cin >> note.nom;
                std::cout << "Entrez le prenom : ";
                std::cin >> note.prenom;
                std::cout << "Entrez la note : ";
                std::cin >> note.note;
                notes.push_back(note);
                break;
            }
            case 2: {
                for (const Note& note : notes) {
                    std::cout << note.nom << " " << note.prenom << " : " << note.note << "\n";
                }
                break;
            }
            case 3: {
                std::string nom;
                std::string prenom;
                std::cout << "Entrez le nom de l'etudiant dont vous voulez supprimer la note : ";
                std::cin >> nom;
                std::cout << "Entrez le prenom de l'etudiant dont vous voulez supprimer la note : ";
                std::cin >> prenom;
                for (auto it = notes.begin(); it != notes.end(); ++it) {
                    if (it->nom == nom && it->prenom == prenom) {
                        notes.erase(it);
                        break;
                    }
                }
                break;
            }
            case 4: {
                double somme = 0;
                for (const Note& note : notes) {
                    somme += note.note;
                }
                std::cout << "La moyenne des notes est : " << somme / notes.size() << "\n";
                break;
            }
            case 5: {
                return 0;
            }
        }
    }
}