// Input: L’entrada comença amb un nombre i, seguit de la seqüència x1, …, xn acabada en −1. Teniu la garantia que 1 ≤ i ≤ n.
// Output: Cal escriure el contingut de la posició i segons es mostra als exemples.

#include <iostream>
using namespace std;


int main() {
    int n; 
    int numero; 
    int posicio = 1;
    cin >> n;
    bool encontrado = false;
    while (not encontrado and cin >> numero) {
        if (posicio == n) encontrado = true;
        else ++posicio;
    }
    if (encontrado) cout << "A la posicio " << n << " hi ha un " << numero << "." << endl;
    else cout << "Posicio incorrecta." << endl;
}