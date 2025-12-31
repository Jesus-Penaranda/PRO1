// Input: L’entrada consisteix en una seqüència no buida de paraules.
// Output: Cal escriure el nombre de paraules de la subseqüència consecutiva més 
// llarga que només conté la primera paraula.

#include <iostream>
using namespace std;

int main() {
    string palabra;
    string a;
    cin >> palabra;
    int contador_actual = 1;
    int contador_max = 1;
    while (cin >> a) {
        if (palabra != a) contador_actual = 0;
        else {
            ++contador_actual;
            if (contador_actual > contador_max) contador_max = contador_actual;
        }
    }
    cout << contador_max << endl;
}