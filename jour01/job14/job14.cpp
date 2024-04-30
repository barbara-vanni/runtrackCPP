#include <iostream>
using namespace std;

int main() {

    int nombre, nombreInverse = 0;

    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    int nombreOriginal = nombre;


    while (nombreOriginal > 0) {
        int dernierChiffre = nombreOriginal % 10; 
        nombreInverse = nombreInverse * 10 + dernierChiffre; 
        nombreOriginal /= 10; 
    }

    cout << "Le nombre inverse est : " << nombreInverse << endl;

    return 0;
}