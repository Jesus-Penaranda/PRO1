// Input: L’entrada consisteix en una seqüència de naturals.
// Output: Per a cada nombre, escriviu la suma dels seus 
// digits seguint el format de l’exemple.

#include<iostream>
using namespace std;

int main() {
    int x;
    int suma = 0;
    while (cin >> x) {
    int numero = x;
        while (x > 0) {
            suma += x%10;
            x /= 10;
        }

    cout << "La suma dels digits de " << numero << " es " << suma << '.' << endl;
    suma = 0;
    }
}