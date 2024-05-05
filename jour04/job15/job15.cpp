#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int& i : arr) {
        std::cout << i << " ";
    }

    return 0;
}