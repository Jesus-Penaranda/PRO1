// Programa que lee un número , lo psa a sistema binari y lo imprime del revés.
// Entrada: la entrada consiste en un natural.
// Salida: Escribir al revés la representación binaria del número, con tanto ceros a la izquierda como sea necesario.

#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num == 0) cout << num;
    while (num > 0) {
        int binario = num%2;
        cout << binario;
        num /= 2;   
    }
    cout << endl;
}   

