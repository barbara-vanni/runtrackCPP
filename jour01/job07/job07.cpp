#include <iostream>
using namespace std;

int main (){
    int nombre;

    cout << "Entrez un entier : ";
    cin >> nombre;

    if (nombre % 2 == 0){
        cout << "Le nombre " << nombre << " est pair" << endl;
    } else {
        cout << "Le nombre " << nombre << " est impair" << endl;
    }

    return 0;
}