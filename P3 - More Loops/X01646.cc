// Input: La entrada está formada por el valor de la base b≥ 2, 
//        seguido de una secuencia de números naturales.
// Output: Para cada número, se ha de imprimir la suma (en base 10) de sus dígitos en base b 
//         siguiendo el formato de los ejemplos.

#include <iostream>
using namespace std;


int main() {
    int base, x;
    cin >> base;
    while (cin >> x) {
        cout << x << ": ";
        int suma = 0;
        while (x != 0) {
            suma += x%base;
            x /= base;
        }
        cout << suma << endl;
    }
}