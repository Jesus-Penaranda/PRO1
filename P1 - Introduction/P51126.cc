//Escriba un programa que, dados dos intervalos, calcule el intervalo 
//correspondiente a su intersección o indique que está vacío.

#include <iostream>
using namespace std;


int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
    if (b1 < a2 or a1 > b2) cout << '[' << ']' << endl;
    else {
        
        if (a1 >= a2) cout << '[' << a1 << ',';
        else cout << '[' << a2 << ',';

        if (b1 <= b2) cout << b1 << ']' << endl;
        else cout << b2 << ']' << endl;
       
    }
    
}