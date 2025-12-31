
// Definimos el nivel de felicidad de un texto como el número de ocurrencias de las subpalabras ":-)" y "(-:".
// El nivel de tristeza es definido como ":-(" y ")-:".
// Input: La entrada contiene una única linea con una secuencia de caracteres sobre (’-’, ’:’, ’(’, ’)’).
// Output: Imprime la cantidad de felicidad o tristeza de la entrada.

#include<iostream>
using namespace std;

int main() {
    char a = ' ';
    char b = ' ';
    char c;
    int felices = 0;
    int tristes = 0;

    while (cin >> c) {
        if ((a == ')' and b == '-' and c == ':') or (a == ':' and b == '-'
            and c == '(')) 
            ++tristes;
        else if ((a == '(' and b == '-' and c == ':') or (a == ':' and b == '-' 
                and c == ')')) 
                ++felices;
        a = b;
        b = c;
    }
    cout << felices << ' ' << tristes << endl;
}
