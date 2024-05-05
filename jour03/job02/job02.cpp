#include <iostream>
#include <algorithm>

int main(){
    std::string str = "vive la plateforme !";
    std::string voyelles = "aeiouAEIOU";

    auto is_vowel = [&voyelles](char c) { return voyelles.find(c) != std::string::npos; };

    auto first_vowel = std::remove_if(str.begin(), str.end(), is_vowel);

    str.erase(first_vowel, str.end());

    std::cout << "Sans voyelles: " << str << std::endl;

    return 0;
}