// chaine de caractère 
char c = '\x01' ;
// nombre entier 
short int p = 10;

// x est un int puisque p est un short int et 1 est un int
x = p + 1

// y est un int puisque c est un char( qui équivaut à 1 en ASCII) et 1 est un int. Le résultat sera 2
y = c + 1

// z est un int puisque p est un short int et c est un char( qui équivaut à 1 en ASCII). Le résultat sera 11
z = p + c

// w est un int puisque p est un short int et c est un char (qui équivaut à 1 en ASCII). Le résultat sera 35
w = 3 * p + 5 * c

// conclusion les int sont prioritaires sur les char //