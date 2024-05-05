#include <iostream>


int main(){

    int T[10] = {};
    
    std::cout << "Entrez 10 nombres (separes par un espace) : " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cin >> T[i];
    }

    for (int i = 0; i < 10; i++) {
        if (T[i] >= 5 ) {
            std::cout << T[i] << std::endl;}
    }

    return 0;
}