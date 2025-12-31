// Input: L’entrada comença amb un nombre i, seguit de la seqüència x1, …, xn acabada en −1. Teniu la garantia que 1 ≤ i ≤ n.
// Output: Cal escriure el contingut de la posició i segons es mostra als exemples.
#include<iostream>
using namespace std;

int main() {
    int lugar;
    int numeros;
    cin >> lugar;
    bool posicion = false;
    cout << "A la posicio " << lugar << " hi ha un ";
    while(not posicion and cin >> numeros) {
        --lugar;
        if (lugar == 0) posicion = true;
    }
    cout << numeros << '.' << endl;
}