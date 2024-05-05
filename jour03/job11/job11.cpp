#include <iostream>

int sommePairs(int arr[], int n) {
    int somme = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            somme += arr[i];
        }
    }
    return somme;
}

int main() {
    std::cout << "Entrez 10 nombres (separes par un espace) : " << std::endl;
    int arr[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    int somme = sommePairs(arr, n);

    std::cout << "La somme des elements pairs est : " << somme << std::endl;

    return 0;
}