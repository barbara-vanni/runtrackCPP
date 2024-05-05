#include <iostream>

int main() {
    int x = 12;
    std::cout << "Avant , x = " << x << std::endl;

    int& ref = x;  
    ref = 15; 

    std::cout << "Apres , x = " << x << std::endl;

    return 0;
}