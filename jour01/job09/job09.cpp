#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Entrez 3 entiers : ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    cout << "Parmi " << a << ", " << b << " et " << c << " le plus grand des 3 entiers est : " << max << endl;
}