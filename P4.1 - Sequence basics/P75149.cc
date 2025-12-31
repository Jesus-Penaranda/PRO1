// Programa que lee si la secuencia contiene algun caracter 'a'.
// Input: entrada que consiste en una secuencia acabada en '.'.
// Output: imprimir "si" en el caso que se haya encontrado 'a' o "no".

#include<iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    while (ch != 'a' and ch != '.') {
       cin >> ch;
    }
    if (ch == 'a') cout << "si" << endl;
    else cout << "no" << endl;
 }

