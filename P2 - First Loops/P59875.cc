//Escriba un programa que lea dos números x e y e imprima todos los números entre x e y en orden decreciente

#include<iostream>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;

    if (x < y) {
        
        for (int i = y; i >= x; --i) cout << i << endl;
        
    }
    else {

        for (int i = x; i >= y; --i) cout << i << endl;   
    
    }
}