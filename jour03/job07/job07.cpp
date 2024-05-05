#include <iostream>
#include <algorithm>


int main(){

    int T[10] = {};
    
    std::cout << "Entrez 10 nombres (separes par un espace) : " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cin >> T[i];
    }

    std::sort(T, T + 10);

    std::cout << T[9] << std::endl;

    return 0;
}