#include <iostream>
using namespace std;

int testfor(){

    int i, n, som;
    som = 0 ;
    for (i = 0; i<4; i++)
    {
        cout << "Donner un entier : ";
        cin >> n;
        som += n;
    }
    cout << "Somme : " << som ;
    return 0;
}

int testwhile(){

    int i, n, som;
    som = 0 ;
    i = 0;

    while (i < 4)
    {
        cout << "Donner un entier : ";
        cin >> n;
        som += n;
        i++;
    }
    cout << "Somme : " << som ;

    return 0;
}


int dowhile(){

    int i, n, som;
    som = 0 ;
    i = 0;

    do
    {
        cout << "Donner un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i< 4);
    
    cout << "Somme : " << som ;
    return 0;
}

int main() {
    // testfor();
    testwhile();
    dowhile();
    return 0;
}




