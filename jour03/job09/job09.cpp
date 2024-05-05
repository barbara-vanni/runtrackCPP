#include <iostream>
#include <string>
#include <algorithm>


bool estIncluse(const std::string& sousChaine, const std::string& chaine) {

    auto it = std::search(chaine.begin(), chaine.end(),
                     sousChaine.begin(), sousChaine.end());


    return it != chaine.end();
}

int main() {
    std::string chaine, sousChaine;

    std::cout << "Entrez la premiere chaine : ";
    std::cin >> sousChaine;

    std::cout << "Entrez la deuxieme chaine : ";
    std::cin >> chaine;

    if (estIncluse(sousChaine, chaine)) {
        std::cout << "La premiere chaine est incluse dans la deuxieme." << std::endl;
    } else {
        std::cout << "La premiere chaine n'est pas incluse dans la deuxieme." << std::endl;
    }

    return 0;
}
