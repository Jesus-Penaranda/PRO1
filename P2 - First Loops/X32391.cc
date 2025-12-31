// Input: La entrada consiste en tres naturales d ≥ 0, n ≥ 0 y t>0, que representan los gastos fijos 
// semanales, los ahorros iniciales, y el número de semanas con asignación, respectivamente.
// Output: La salida es un número natural que indica en cuantas de las t semanas se ha obtenido un 
// saldo estrictamente positivo, después de pagar los gastos de la semana.

#include<iostream>
using namespace std;

int main() {
    int d, n, t;
    cin >> d >> n >> t;
    int semana;
    int contador = 0;
    for (int i = 1; i <= t; ++i) {
        cin >> semana;
        if ((n + semana - d ) > 0) ++contador;
        n = n + semana - d;
    }
    cout << contador << endl;


}