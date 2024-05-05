#include <iostream>
#include <string>
#include <algorithm>


bool compare_nocase (std::string first, std::string second)
{
  unsigned int i=0;
  while ( (i<first.length()) && (i<second.length()) )
  {
    if (tolower(first[i])<tolower(second[i])) return true;
    else if (tolower(first[i])>tolower(second[i])) return false;
    ++i;
  }
  if (first.length()<second.length()) return true;
  else return false;
  
}


int main() {
    std::string string;
    std::string string2;
    std::string tab[] = {};

    std::cout << "Entrez une chaîne de caractères : ";
    std::cin >>string;

    for (int i = 0; i < string.size(); i++) {
        string[i] = tolower(string[i]);  
        std::string tab[i] = {string};
    }

    std::cout << "Taille de la chaine de caractere : " << sizeof(tab) / sizeof(tab[0]) << std::endl;

    // std::string string2 = "Bonjour";

    // std::string tab[] = {string, string2};

    // std::cout << "Taille de la chaine de caractere : " << sizeof(tab) / sizeof(tab[0]) << std::endl;
    // int size = sizeof(tab) / sizeof(tab[0]);

    // std::sort(tab, tab + size);

    // for (int i = 0; i < size; i++) {
    //     std::cout << tab[i] << std::endl;
    // }

    return 0; 
}


