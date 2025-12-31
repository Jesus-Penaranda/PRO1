// Input: L’entrada consisteix en un nombre n, seguit de n naturals.
// Output: Per a cada natural donat, escriviu en una línia si és primer o no, seguint el format de l’exemple.

#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int seq, x = 2;
        cin >> seq;
        cout << seq;
        bool prim = true;
        while (x*x <= seq and prim) {
            if (seq%x == 0) prim = false;
            ++x;
        }
        if (seq < 2) cout << " no es primer" << endl;
        else if (prim) cout << " es primer" << endl;
        else cout << " no es primer" << endl;
    }
}