// Input: L’entrada és una seqüència no buida de naturals més grans o iguals que 100.
// Output: Cal escriure els nombres de l’entrada que acabin amb les mateixes tres xifres que 
// el primer nombre de la seqüència, així com quants d’aquests nombres hi ha. Utilitzeu el format dels exemples.

#include<iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int contador = 0;
    cin >> num1;
    cout << "nombres que acaben igual que " << num1 <<':' << endl;
    num1 = num1%1000;
    while (cin >> num2) {
        if (num2%1000 == num1) {
            ++contador;
            cout << num2 << endl;  
        }
    }   
    cout << "total: " << contador << endl;
}