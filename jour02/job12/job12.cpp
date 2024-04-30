#include <iostream>

int main() {
    int N = 0;
    int i;
    double somme = 0;

    std::cout << "Entrez une valeur de N : ";
    std::cin >> N;

    for (i = 1; i <= N; i++) {
        somme += 1.0 / i;
        std::cout << "1/" << i << " = " << 1.0 / i << std::endl;
    }
    std::cout << "La somme est : " << somme << std::endl;
    return 0;
}