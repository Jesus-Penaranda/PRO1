// Input: La entrada es una secuencia de caracteres sobre {a,b,c,d}, en una sola linea.
// Output: La salida tiene dos números naturales, en una sola linea, y separados por un espacio en blanco:
// el número de c’s que tienen una a antes y no hay ninguna b entre ambas letras.
// el número de d’s que tienen una a después y no hay ninguna b entre ambas letras.

#include<iostream>
using namespace std;

int main() {
    char ch;
    bool c = false;
    bool d = false;
    int contadorc = 0;
    int contadord = 0;
    int resultadod = 0;
    while (cin >> ch) {
      if (ch == 'a'){
            c = true;
            if (d) resultadod += contadord;
            contadord = 0;
        }else if (ch == 'c'){
            if (c) ++contadorc;
        }else if(ch == 'b'){
            c = false;
            d = false;
            contadord = 0;
        }else if (ch == 'd'){
            ++contadord;
            d = true;
        }

    }
    cout << contadorc << ' ' << resultadod << endl;
}
    
    