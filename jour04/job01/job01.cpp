#include <iostream>

int main(){
    int number = 219;
    int *ptr = &number;

    std::cout << "La valeur de number est : " << *ptr << std::endl;
}