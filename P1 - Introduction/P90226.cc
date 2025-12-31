//Escribe un programa que lea dos palabras y diga su orden lexicográfico.

#include<iostream>
using namespace std;

int main() {
    string PALABRA1;
    string PALABRA2;  

    cin >> PALABRA1 >> PALABRA2;
    if (PALABRA1 < PALABRA2) cout << PALABRA1 << " < " << PALABRA2 << endl;
    else if (PALABRA1 > PALABRA2) cout << PALABRA1 << " > " << PALABRA2 << endl;
    else cout << PALABRA1 << " = " << PALABRA2 << endl;
}