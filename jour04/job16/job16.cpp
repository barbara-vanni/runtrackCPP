#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 42, 5};
    int max = arr[0];

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "La valeur maximale est : " << max << std::endl;

    return 0;
}