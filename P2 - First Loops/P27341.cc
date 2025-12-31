// Feu un programa que, per a cada parell d’enters a i b donats, calculi i escrigui 
// la suma de tots els cubs entre a i b.
// Input: L’entrada és una seqüència de parells d’enters a i b.
// Output: Per a cada parell de l’entrada, cal escriure, en una línia i segons el format de l’exemple, 
// el resultat de la suma a3 + (a + 1)3 + ⋯ + (b − 1)3 + b3.

#include<iostream>
using namespace std;
 
int main() {
    int x;
    int y;
    int suma = 0;
    while (cin >> x >> y) {
    for (int i = x; i <= y; ++i) suma += i*i*i;

    cout << "suma dels cubs entre " << x << " i " << y << ": " << suma << endl;
    suma = 0;
    }
}