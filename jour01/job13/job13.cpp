#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Entrez un entier N : ";
    cin >> N;


    if (N < 5) {
        cout << "N doit etre au moins 5 pour calculer la somme des cubes de 5^3 a N^3." << endl;
        return 1;  
    }


    int sommeCubes = 0;

    for (int i = 5; i <= N; ++i) {
        int cube = i * i * i; 
        sommeCubes += cube;   
    }


    cout << "La somme des cubes de 5^3 a " << N << "^3 est : " << sommeCubes << endl;

    return 0;
}