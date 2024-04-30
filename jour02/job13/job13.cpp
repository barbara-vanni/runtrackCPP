#include <iostream>
#include <iomanip>


/* i= colonnes et j = lignes*/
int n = 10;  
int i;
int j;
int tailletable;
int cpteur;

int main () {  
	std::cout << std::endl << std::setw(6) << std::setfill(' ') << '|';
	tailletable = n;

	while (tailletable > 0)
	{
		std::cout << std::setw(3) << std::setfill(' ') << n-tailletable+1;
		tailletable--;
	}

	std::cout << std::endl << std::setw(n*3+8) << std::setfill('-') << "";
	
	tailletable = n;
	j = 1;
	while (n > 0) {
		i = 1;

		std::cout << std::endl << std::setw(3) << std::setfill(' ') << j << "  " << '|';
		cpteur = tailletable;

		while (cpteur > 0) {
			std::cout << std::setw(3) << std::setfill(' ') << i*j;
			i++;
			cpteur--;
		}
		n--;
		j++;
	}

	return 0; 
}