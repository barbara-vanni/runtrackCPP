#include <iostream>
using namespace std;

int main() {
    double prixHTKilo; 
    double nbKilos;    
    double tauxTVA;  

    cout << "Entrez le prix HT d'un kilo de carottes en euros : ";
    cin >> prixHTKilo;

    cout << "Entrez le nombre de kilos de carottes : ";
    cin >> nbKilos;

    cout << "Entrez le taux de TVA en pourcentage (ex : 15) : ";
    cin >> tauxTVA;


    double prixHTTotal = prixHTKilo * nbKilos; 
    double montantTVA = (prixHTTotal * tauxTVA) / 100; 
    double prixTTC = prixHTTotal + montantTVA;

    cout << "TVA : " << montantTVA << " euros" << endl;
    cout << "HT : " << prixHTTotal << " euros" << endl;
    cout << "Le prix TTC pour " << nbKilos << " kilos de carottes est de : " << prixTTC << " euros" << endl;

    return 0;
}