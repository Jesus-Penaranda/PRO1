// Input: L’entrada consisteix en un natural n.
// Output: Escriviu n línies, de manera que la línia i contingui i asteriscos.

#include <iostream>
using namespace std;


int main() {
    int mida;
    cin >> mida;
    int asterisco = 1;
    for (int i = 1; i <= mida; ++i) {
        for (int j = 1; j <= asterisco; ++j) {
            cout << '*';
        }
        ++asterisco;
        cout << endl;
    }
}