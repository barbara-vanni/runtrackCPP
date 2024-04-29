#include <iostream>
using namespace std;


int main() {

    int année;

    cout << "Entrez une annee : ";
    cin >> année;

    if (année % 4 == 0) {
        if (année % 100 == 0) {
            if (année % 400 == 0) {
                cout << "L'annee " << année << " est bissextile" << endl;
            } else {
                cout << "L'annee " << année << " n'est pas bissextile" << endl;
            }
        } else {
            cout << "L'annee " << année << " est bissextile" << endl;
        }
    } else {
        cout << "L'annee " << année << " n'est pas bissextile" << endl;
    }
}