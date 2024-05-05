#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string fruit[5] = {"Pomme", "Banane", "Orange", "Fraise", "Cerise"};

    std::cout << "Les fruits sont : ";
    for (int i = 0; i < 5; i++) {
        std::cout << fruit[i] << " ";
    }
    std::cout << std::endl;

    int nombre;
    std::cout << "Combien de fruits preferes avez-vous ? ";
    std::cin >> nombre;

    std::vector<std::string> favoris(nombre);
    for (int i = 0; i < nombre; i++) {
        std::cout << "Entrez votre fruit prefere numero " << i + 1 << " : ";
        std::cin >> favoris[i];
    }

    std::cout << "Vos fruits preferes sont : ";
    for (int i = 0; i < nombre; i++) {
        std::cout << favoris[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}