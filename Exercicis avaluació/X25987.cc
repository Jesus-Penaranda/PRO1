// Input: La entrada tiene un número arbitrario de casos. Cada caso contiene un natural positivo en una linea.
// Output: Para cada caso, hay una linea con el correspondiente número de picos.

#include <iostream>
using namespace std;
 
int main() {
    int n;
    while (cin >> n){
        int contador = 0;
        while (n >= 100) {
            int numero1; 
            int numero2; 
            int numero3;
            numero1 = n % 10;
            numero2 = (n % 100)/10;
            numero3 = (n % 1000)/100;

            if (numero1 < numero2 and numero2 > numero3) ++contador;

            n /= 10;
            
        }
        cout << contador << endl;
    }
}