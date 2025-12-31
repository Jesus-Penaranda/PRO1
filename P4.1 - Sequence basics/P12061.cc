// Input: L’entrada consisteix en diverses paraules. Tant la paraula “principi” com la paraula “final” 
// hi apareixen, com a molt, una vegada.
// Output: Cal escriure el nombre de paraules entre la paraula “principi” i la paraula “final”, si aquestes 
// apareixen en aquest ordre. Altrament, cal escriure “sequencia incorrecta”.

#include <iostream>
using namespace std;

int main() {
    string principi;
    int contador = 0;
    bool empezar = false;
    while (not empezar and cin >> principi) {
        if (principi == "principi") empezar = true;
    }
    bool final = false;
    while (not final and cin >> principi) {
        if (principi != "final") ++contador;
        else final = true;   
    }
    if (not final) cout << "sequencia incorrecta";
    else cout << contador;
    cout << endl;

}