#include <iostream>
#include <string>

int main() {
    std::string str;

    std::cout << "Entrez une chaîne de caractères : ";
    std::getline(std::cin, str);

    int n = str.length();
    char tab[n + 1];

    for (int i = 0; i < n; i++) {
        tab[i] = str[i];
    }
    tab[n] = '\0';

    std::cout << "Le tableau contient : " << tab << std::endl;

    return 0;
}