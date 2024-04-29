#include <iostream>
using namespace std;

int main() {
    int total = 0;  
    int nombre;     

    cout << "Entrez cinq entiers separes par des espaces : ";


    for (int i = 0; i < 5; ++i) {
        cin >> nombre;
        total += nombre;
    }

    double moyenne = static_cast<double>(total) / 5;

    cout << "La moyenne des cinq entiers est : " << moyenne << endl;

    return 0;
}