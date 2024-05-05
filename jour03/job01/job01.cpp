#include <iostream>
#include <cctype>

int main(){
    std::string str = "vive la plateforme !";

    for (char &c : str) {
        c = std::toupper(c);
    }

    std::cout << str << std::endl;

    return 0;
}