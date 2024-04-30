#include <iostream>
using namespace std;


int main(){
     
    int note;
    do
    {
        cout << "Entrez votre note : ";
        cin >> note;

        if (note <= 10)
        {
            cout << "Non valide\n";
        } else if (note > 10 && note <= 20)
        {
            cout << "Valide\n";
        }
        else
        {
            cout << "Note invalide\n";
        }

    } while (note < 0 || note > 20);
    
    return 0;
}