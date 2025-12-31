// Input: L’entrada consisteix en una seqüència de naturals que conté, com a mínim, un nombre parell.
// Output: Cal escriure la posició del primer nombre parell de la seqüència.

#include<iostream>
using namespace std;

int main() {
    int posicion = 0;
    int numero;
    bool encontrado = false;
    while (not encontrado and cin >> numero) {
        ++posicion;
        if (numero%2 == 0) encontrado = true;
    }
    cout << posicion << endl;
}