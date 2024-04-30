#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Entrez deux entiers separes par un espace : " ;
    cin >> a >> b;

    while(a < b + 1)
    {
        cout << a << " ";
        a++;
    }


    return 0;
}