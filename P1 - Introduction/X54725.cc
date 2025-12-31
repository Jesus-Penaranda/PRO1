//Escribe un programa que lea dos numeros y indique el menor.

#include<iostream>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    if (x < y) cout << x << endl;
    else cout << y << endl;
}