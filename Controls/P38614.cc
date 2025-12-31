// Input: L’entrada és un natural n.
// Output: Escriviu en una línia si n és txatxi o no, segons el format dels exemples.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int suma = 0;
    int numero = n;
    while (n > 0) {
        int txatxi = n%10;
        if (txatxi%2 != 0) suma += txatxi;
        n /= 100;
    }
   
    if (suma%2 == 0) cout << numero << ' ' << "ES TXATXI" << endl;
    else cout << numero << ' ' << "NO ES TXATXI" << endl;
}