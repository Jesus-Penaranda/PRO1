// Input: La entrada está formada por una secuencia de pares de naturales b≥ 2 i n≥ 1.
// Output: Para cada par, escribid el número de cifras de n en base b.

#include <iostream>
using namespace std;


int main() {
    int base;
    int numero;
    while (cin >> base >> numero) {
        int contador = 0;
        while (numero > 0) {
            ++contador;
            numero /= base;
        }
    cout << contador << endl;
    }
}