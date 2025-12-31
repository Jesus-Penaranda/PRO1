//Escriba un programa que lea un número n e imprima todos los números entre 0 y n.

#include<iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;
    int i;

    for (i = 0; i <= numero; ++i) {
    cout << i << endl;
    }   
}