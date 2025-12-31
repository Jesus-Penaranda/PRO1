// Input: Un número arbitrario de casos, donde cada uno consiste en dos naturales positivos en una línea.
// Output: Para cada caso, la correspondiente secuencia de rombos, seguida de una línea en blanco.

#include <iostream>
using namespace std;

int main () {
    int num_espacios;
    int num_rombos;

    while (cin >> num_espacios >> num_rombos) {
        // Línea inicial del rombo.
        for(int i = 0; i < num_espacios; ++i) cout << ' ';
        cout << '*' << endl;
        // Cantidad de rombos introducidos por num_rombos.
        for (int j = 0; j < num_rombos; ++j) {
            // Imprimir la parte superior del rombo.
            for(int k = 1; k <= num_espacios; ++k) {
                for (int i = 1; i <= num_espacios - k; ++i) cout << ' ';
                cout << '*';

                for (int i = 1; i <= 2*k - 1; ++i) cout << ' ';
                cout << '*' << endl;
            }
            // Imprimir la parte inferior del rombo.
            for (int k = num_espacios - 1; k >= 1; --k) {
                for (int i = 1; i <= num_espacios - k; ++i) cout << ' ';
                cout << '*';
                
                for (int i = 1; i <= 2*k - 1; ++i) cout << ' ';
                cout << '*' << endl;
            }
            // Imprimir el último asterisco de la parte inferior.
            for(int i = 0; i < num_espacios; ++i) cout << ' ';
            cout << '*' << endl;
        }
        cout << endl;
    }
}


 
 