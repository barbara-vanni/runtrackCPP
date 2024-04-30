#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    switch(n)
    {
        case 0 : cout << "Nul\n";
        case 1 :
        case 2 : cout << "Petit\n";
                            break;
        case 3 :
        case 4 :
        case 5 : cout << "Moyen\n";
        default : cout << "Grand\n";
    }

}

/*  Les résultats pour 
n = 0   --> Nul , Petit
n = 1  --> Petit
n = 4   --> Moyen, Grand
n = 10 --> Grand
n = -5 --> Grand
*/