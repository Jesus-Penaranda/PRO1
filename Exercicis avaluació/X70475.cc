// Definimos el nivel de felicidad de un texto como el número de ocurrencias de las 
// subpalabras de los siguientes dos tipos:
// el nivel de felicidad ":-)" seguida de uno o mas '-' como por ejemplo: ":--)" o "(---:", 
// el nivel de tristeza se mide con  ":-(" seguida de uno o mas '-'.
// Input: La entrada contiene una única linea con una secuencia de caracteres sobre (’-’, ’:’, ’(’, ’)’).
// Output: La salida tiene dos números separados por un espacio, 
// el nivel de felicidad y el nivel de tristeza del texto de entrada.

#include<iostream>
using namespace std;

int main() {
    char a = ' ';
    char b = ' ';
    char c;
    int felices = 0;
    int tristes = 0;

    cin >> a >> b;

    while (cin >> c) {
        if ((a == ')' and b == '-' and c == ':') or (a == ':' and b == '-'
            and c == '(')) {
                ++tristes;
                a = b;
                b = c;
        } else if ((a == '(' and b == '-' and c == ':') or (a == ':' and b == '-' 
            and c == ')')) {
                ++felices;
                a = b;
                b = c;
        } else if ((a == ':' or a == ')' or a == '(') and b == '-'
            and c == '-') { 
                b = c;
        } else if (a == '-' or b != '-'  or (a != '-' and c != '-')) {
                a = b;
                b = c;
        }
    }
    cout << felices << ' ' << tristes << endl;
}