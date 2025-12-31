// Input: secuencia de '(' i ')'.
// Output:imprimir "si" en el caso que los parentesis se cierren correctamente
// o imprimir "no" en el caso que no sean correctos.

#include<iostream>
using namespace std;

int main () {
    char ch;
    int suma_parent = 0;
    bool balanceados = true;
    while (balanceados and cin >> ch) {
        if (ch == '(') ++suma_parent;
        else --suma_parent;
        if (suma_parent < 0) balanceados = false;
    }
    if (suma_parent == 0) cout << "yes" << endl;
    else cout << "no"<< endl;

}