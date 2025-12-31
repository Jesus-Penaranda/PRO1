// Input: La entrada consiste en diversos pares de enteros a y b. Assumid b ≥ 0.
// Output: Para cada par a,b, escribid ab. Suponed, como es habitual, que 00 = 1.

#include<iostream>
using namespace std;

int main() {
    int base;
    int potencia;
    int resultado = 1;
    while(cin >> base >> potencia) {
    for(int i = 0; i < potencia; ++i) {
        resultado *= base;
    }
    cout << resultado << endl; 
    resultado = 1;
    }
}