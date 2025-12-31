// Input: L’entrada consisteix en una seqüència de caràcters ‘n’, ‘s’, ‘e’, o bé ‘o’.
// Output: Cal escriure la posició final d’un objecte que inicialment es trobés a la posició (0, 0).

#include<iostream>
using namespace std;

int main() {
    int posicio_est_oest = 0;
    int posicio_nord_sud = 0;
    char posicio;
    while (cin >> posicio) {
        if (posicio == 'n') --posicio_nord_sud;
        else if (posicio == 's') ++posicio_nord_sud;
        else if (posicio == 'e') ++posicio_est_oest;
        else if (posicio == 'o') --posicio_est_oest;
    }
    cout << '(' << posicio_est_oest << ", " << posicio_nord_sud << ')' << endl;
}