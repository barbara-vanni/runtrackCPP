#include <iostream>
using namespace std;


int main(){
    
    int nombre1;
    int nombre2;
    char operateur;

    cout << "Entrez votre opération : ";
    cin >> nombre1 >> operateur >> nombre2;

    switch(operateur)
    {
        case '+' : cout << nombre1 + nombre2 << endl;
                    break;
        case '-' : cout << nombre1 - nombre2 << endl;
                    break;
        case '*' : cout << nombre1 * nombre2 << endl;
                    break;
        case '/' : cout << nombre1 / nombre2 << endl;
                    break;
        default : cout << "Opérateur invalide" << endl;
    }

    return 0;
    
}