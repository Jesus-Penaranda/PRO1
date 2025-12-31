// Input: consiste en una entrada de caracteres.
// Output: imprimir la cantidad de 'a'.

#include<iostream>
using namespace std;

int main(){
    char ch;
    int contador = 0;
    cin >> ch;
    while(ch != '.') {
        if (ch == 'a') ++contador;
        cin >> ch;
    }
    cout << contador << endl;
}