//Escribe un programa que indique si un año es o no bisiest

#include <iostream>
using namespace std;


int main() {
    int año;
    cin >> año;
    
    if ((año%4 == 0 and año%100 != 0) or (año%100 == 0 and(año/100)%4 == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}