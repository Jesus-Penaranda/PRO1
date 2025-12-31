// Implementad un programa tal que, dada una secuencia de caracteres sobre {a,b,c,d}, diga cual es el 
// primer caracter que se repite si los comenzamos a leer desde el principio, y en que posición 
// se produce esa primera repetición (las posiciones se suponen indexadas comenzando desde 0).
// Input: La entrada contiene una única linea con una secuencia de caracteres consecutivos sobre {a,b,c,c}.
// Output: La salida contiene el primer carácter que se repite, y la posición de la primera repetición. 
// Esos datos deben aparecer en una linea y separados por un espacio en blanco.

#include <iostream>
using namespace std;

int main() {
    int a = 0; 
    int b = 0;
    int c = 0; 
    int d = 0;
    char ch;
    int contador = 0;
    
    while (a < 2 and b < 2 and c < 2 and d < 2) {
        cin >> ch;
        if (ch == 'a') ++a;
        else if (ch == 'b') ++b;
        else if (ch == 'c') ++c;
        else if (ch == 'd') ++d;
        ++contador;
    }

    cout << ch << ' ' << contador - 1 << endl; 
  
}
