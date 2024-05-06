#include "Personne.hpp"

int main() {
    Personne personne1("Alice", 100, 1.5);
    personne1.afficher();

    Personne personne2("Bob", 120, 1.2);
    personne2.afficher();

    personne1.modifier("Charlie", 110, 1.3);
    personne1.afficher();

    return 0;
}