#include <iostream>
#include <string>

std::string inverserChaine(std::string *ptr){
    std::string chaine = *ptr;
    std::string chaineInverse = "";
    for (int i = chaine.size()-1; i >= 0; i--){
        chaineInverse += chaine[i];
    }
    return chaineInverse;
}

int main(){
    std::string chaine="";
    std::string *ptr = &chaine;

    std::cout << "Entrez une chaine de caractere : ";
    std::cin >> *ptr;

    std::cout << "La chaine inverse est : " << inverserChaine(ptr) << std::endl;

    return 0;
}

