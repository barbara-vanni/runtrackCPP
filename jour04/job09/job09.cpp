#include <iostream>

int main(){
    int tableau[5] = {};

    std::cout << "ENtrez 5 entiers separes par un espace : "<< std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> tableau[i];
    }

    std::cout << "Tableau : ["<< tableau[0] << ", " << tableau[1] << ", " << tableau[2] << ", " << tableau[3] << ", " << tableau[4] << "]" << std::endl;
}