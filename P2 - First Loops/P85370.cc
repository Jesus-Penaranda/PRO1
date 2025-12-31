// Donat un capital inicial c en euros, un interès anual i (expressat en %), un temps t en anys, 
//i una indicació de si l’interès és simple o compost, calculeu en quants 
// euros es transforma el capital inicial.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int tiempo;
    double capital, interes, resultado;
    string tipo;
    cin >> capital >> interes >> tiempo >> tipo;
    
    if (tipo == "simple") {
        interes = interes / 100;
        resultado = capital + (capital * interes * tiempo);
        cout << resultado << endl;
    }
    
    else if (tipo == "compost") {
        interes = interes/100;
        resultado = capital * ( pow (1 + interes, tiempo) ); 
        cout << resultado << endl;
    }
}