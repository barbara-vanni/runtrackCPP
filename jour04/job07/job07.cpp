#include <iostream>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPointer = arr;

    for (int i=0; i<5; i++){
        std::cout << "La valeur de l'indice " << i << " est : " << arrPointer[i] << " et son adresse est : " << &arrPointer[i] << std::endl;
    }

}