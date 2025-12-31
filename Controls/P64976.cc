//Programa que lee un número natural n e imprime las n primeras líneas de su tabla de multiplicar.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
   
        cout << n << " x " << i << " = " << n*i << endl;
    }
}