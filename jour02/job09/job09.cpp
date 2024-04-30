#include <iostream>
using namespace std;


int main(){
    int r ;
    int a = 25 ;
    int b = 50 ;

    cout << "Entrez un entier : " ;
    cin >> r ;

    if (r >= a && r <= b)
    {
        cout << " GAGNE "<< endl;
    }
    else
    {
        cout << " PERDU " << endl;
    }

    return 0;
}