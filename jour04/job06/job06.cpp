#include <iostream>

int main(){
    int number = 17;
    float flottant = 3.14;
    double reel = 123.345;
    std::string caractere = "Plateforme"; 

    std::cout << "Adresse de number : " << &number << std::endl;
    std::cout << "Adresse de flottant : " << &flottant << std::endl;
    std::cout << "Adresse de reel : " << &reel << std::endl;
    std::cout << "Adresse de caractere : " << (void*)&caractere << std::endl;

    return 0;
}