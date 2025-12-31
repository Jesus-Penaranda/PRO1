// Input: L’entrada comença amb el nombre de files f i el nombre de columnes c. 
// Segueixen f línies, cadascuna amb c caràcters entre ‘0’ i ‘9’.
// Output: Cal escriure el nombre total de monedes del tauler només a les caselles blanques.

#include <iostream>
using namespace std;

int main() {
    int filas;
    int columnas;
    int monedas = 0;
    cin >> filas >> columnas;
   
    for (int i = 1; i <= filas; ++i) {
        char numero; 
        for (int j = 1; j <= columnas; ++j) {
            cin >> numero;
            numero = int (numero) - '0';
            if ((i%2 != 0 and j%2 != 0) or (i%2 == 0 and j%2 == 0)) monedas += numero;
        }
    }
    cout << monedas << endl;
}