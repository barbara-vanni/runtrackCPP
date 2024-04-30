#include <iostream>

int fib(int n, int a, int b) {
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    } else {
        return fib(n - 1, b, a + b);
    }
    return 0;
}

int main() {
    int n;
    std::cout << "Entrer un nombre d'iteration de la suite  ";
    std::cin >> n;

    int a = 0;
    int b = 1;
    int c = 0;

    for (int i = 0; i < n; i++) {
        c = fib(i, a, b);
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}