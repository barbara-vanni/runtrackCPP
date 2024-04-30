#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Entrez un nombre : ";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " l'iteration est un multiple de 3 et de 5"<< endl;
        }
        else if (i % 3 == 0)
        {
            cout << i <<" l'iteration est un multiple de 3"<< endl;
        }
        else if (i % 5 == 0)
        {
            cout << i << " l'iteration est un multiple de 5"<< endl;
        }
        else
        {
            cout << i << " l'iteration n'est pas un multiple de 3 ou de 5"<< endl;
        }
    }

    return 0;
}