#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Entrer un entier positif n = ";
    std::cin >> n;

    int s = 0;
    std::string a = std::to_string(n);
    int c = a.length();

    for (int i = 0; i < c; i++) {
        s += std::pow(a[i] - '0', c); 
    }

    if (s == n) {
        std::cout << n << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << n << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}