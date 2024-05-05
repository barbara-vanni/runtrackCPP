#include <algorithm>
#include <iostream>
#include <string>

bool isPalindrome(const std::string& S) {
    std::string P = S;
    std::reverse(P.begin(), P.end());
    return S == P;
}

int main() {
    std::string tab[] = {"radar", "hello", "lvel", "stats", "world"};
    int n = sizeof(tab) / sizeof(tab[0]);

    for (int i = 0; i < n; i++) {
        if (isPalindrome(tab[i])) {
            std::cout << tab[i] << " est un palindrome." << std::endl;
        }
    }

    return 0;
}
