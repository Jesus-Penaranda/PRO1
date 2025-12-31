// Programa que lee un número y escriba su representación hexadecimal del revés. 
// Utiliza convención de usar las letras de la 'A' hasta la 'F' para representar los valores del 10 al 15.
// Entrada: la entrada consiste en un natural.
// Salida: Escribir al revés la representación hexadecimal del número, con tanto ceros a la izquierda como sea necesario.

#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num == 0) cout << num;
    while (num > 0) {
        int hexa = num%16;
        if (hexa < 10) cout << hexa;
        else if (hexa == 10) cout << 'A';
        else if (hexa == 11) cout << 'B';
        else if (hexa == 12) cout << 'C';
        else if (hexa == 13) cout << 'D';
        else if (hexa == 14) cout << 'E';
        else if (hexa == 15) cout << 'F';
        num /= 16;   
    }
    cout << endl;
}   