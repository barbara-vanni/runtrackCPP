#include <iostream>
#include <string>
#include <regex>


bool verifierFormatHeure(const std::string& heure) {
    std::regex formatHeure("\\d{1,2}h\\d{1,2}");

    return std::regex_match(heure, formatHeure);
}

int verifierHeure(const std::string& heure) {
    std::regex formatHeure("\\d{1,2}h\\d{1,2}");

    if (!std::regex_match(heure, formatHeure)) {
        return -1;
    }

    std::string heures = heure.substr(0, heure.find('h'));
    std::string minutes = heure.substr(heure.find('h') + 1);

    int heuresInt = std::stoi(heures);
    int minutesInt = std::stoi(minutes);

    if (heuresInt < 0 || heuresInt > 23) {
        return -1;
    }

    if (minutesInt < 0 || minutesInt > 59) {
        return -1;
    }

    return 0;
}


int main() {
    std::string heure;

    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> heure;

    if (verifierFormatHeure(heure) && verifierHeure(heure) == 0){
        std::cout << "Format d'heure valide !" << std::endl;
    } else {
        std::cout << "Format d'heure invalide ou heure invalide. " << std::endl;
    }

    return 0;
}
