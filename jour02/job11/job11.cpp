#include <iostream>

int main() {

  int valeur;

  std::cout << "Entrez un entier : ";
  std::cin >> valeur;

  long long fact = 1;

  for(int i = 1; i <= valeur; i++) {
    fact *= i;
  }

  std::cout << "La factorielle de " << valeur << " est " << fact << std::endl;

  return 0;
}


