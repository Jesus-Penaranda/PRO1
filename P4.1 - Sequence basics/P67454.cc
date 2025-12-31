// Input: L’entrada consisteix en una seqüència de caràcters que conté almenys un punt.
// Output: Cal escriure el nombre de vegades que ‘a’ apareix a la seqüència abans del primer punt.

#include<iostream>
using namespace std;

int main() {
    char a;
    int contador = 0;
    while (cin >> a and a != '.') {
        if (a == 'a') ++contador;
    }
    cout << contador << endl;
}
