// Feu un programa que llegeixi un enter estrictament positiu x i una seqüència d’enters, 
// i que digui quants elements hi ha a la seqüència que siguin múltiples de x.
// Input: L’entrada és un enter x > 0 seguit d’una seqüència d’enters.
// Output: Escriviu el nombre d’elements de la seqüència que són múltiples de x.

#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int multiplos;
    int contador = 0;
    while(cin >> multiplos) {
        if (multiplos%x == 0) ++contador;
    }
    cout << contador << endl;
}


