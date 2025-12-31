//Escriba un programa que transforme una minnuscula a mayuscula y a la inversa

#include<iostream>
using namespace std;

int main() {

    char letra = 'x';
    cin >> letra;

    if ( letra >= 'a' and letra <= 'z') {
    cout << char(int(letra) - (int('a') - int('A'))) << endl;
    }
    
    else cout << char(int(letra) + (int('a') - int('A'))) << endl;
}