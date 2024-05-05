#include <iostream>

int main() {
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    int* ptr1 = &var1;
    int* ptr2 = &var2;
    int* ptr3 = &var3;

    std::cout << "Les valeurs originales sont : " << *ptr1 << ", " << *ptr2 << ", " << *ptr3 << std::endl;

    *ptr1 = 100;
    *ptr2 = 200;
    *ptr3 = 300;

    std::cout << "Les nouvelles valeurs sont : " << var1 << ", " << var2 << ", " << var3 << std::endl;

    return 0;
}