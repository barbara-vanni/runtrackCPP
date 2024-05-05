#include <iostream>

int main(){
    int number1 = 42;
    int number2 = 24;
    int *ptr1 = &number1;
    int *ptr2 = &number2;

    std::cout << "La valeur de number1 est : " << *ptr1 << std::endl;
    std::cout << "La valeur de number2 est : " << *ptr2 << std::endl;

    std::cout << "La valeur de number1 est maintenant: " << *ptr2 << std::endl;
    std::cout << "La valeur de number2 est maintenant: " << *ptr1 << std::endl;
}