//Escriba un programa que lea dos números a y b e imprima todos los números entre a y b 

#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >>b;

    for (int i = a; i <= b; i++) {
    if (i < b)cout  << i << ',';
    else cout << i;
    }
    cout << endl;
}