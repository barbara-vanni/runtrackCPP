#include <iostream>
using namespace std;

int main (){

    int n; 
    int m;

    cout << "Entrez un entier n : ";
    cin >> n;
    cout << "Entrez un entier m : ";
    cin >> m;

    cout << "Avant permutation : n = " << n << " et m = " << m << endl;

    int temp = n;
    n = m;
    m = temp;

    cout << "Après permutation : n = " << n << " et m = " << m << endl;

    return 0;
}