//Escriba un programa que lea un número n e imprima la “tabla de multiplicar” de n.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= 10; i++) {
   
        cout << n << '*' << i << " = " << n*i << endl;
    }
}