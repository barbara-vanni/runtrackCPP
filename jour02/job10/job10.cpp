#include <iostream>
#include <cmath>

int main(){
    double a;

    do
    {
        std::cout << "Entrez un entier positif : " ;
        std::cin >> a ;

        if (a > 0)
        {
            std::cout << "La racine carree de " << a << " est " << sqrt(a) << std::endl;
        }
        else if (a < 0)
        {
            std::cout << "Erreur : l'entier doit etre positif" << std::endl;
        }


    } while ( a != 0);

    return 0;
}