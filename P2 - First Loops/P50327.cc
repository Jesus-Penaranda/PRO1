// Programa que lee un número y lo escribe del revés.
// Entrada: la entrada consiste en un natural.
// Salida: Escriba el número del revés, con tantos ceros a la izquierda como tiene a la derecha.

#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num == 0) cout << num;
    while (num > 0) {
        int num1 = num%10;
        cout << num1;
        num /= 10;      
    }
    cout << endl;  
}

