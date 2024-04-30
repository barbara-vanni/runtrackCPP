#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Entrez deux entiers separes par un espace : " ;
    cin >> a >> b;


    for (int i = a; i < b + 1; i++)
    {
        cout << i << " ";
    }


    return 0;
}