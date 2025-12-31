// Programa con un numero abritrario de lineas, cuya lineas contienen caracteres 'a'
// o 'b'. Finalizadas por '.' o '?' o '!'.
// Input: La entrada tiene un número arbitrario de líneas. Cada línea tiene uno o más
// caracteres a o b finalizados por un signo de // puntuación . o ? o !.
// Output: Para cada línea de la entrada, hay que escribir un natural, el número total de frases que vienen
//inmediatamente a continuación de preguntas, y que tienen estrictamente más a’s que b’s.

#include<iostream>
using namespace std;

int main() {

    char ch;
    int contadora = 0;
    int contadorb = 0;
    bool start = false;
    int resultado = 0;
    while (cin >> ch) {
        if (ch == '?') start = true;
        
    while (start and cin >> ch) {
       if (ch == 'a') ++contadora;
       else if(ch == 'b') ++contadorb;

       else if ((ch == '.' or ch == '?' or ch == '!') and (contadora > contadorb)) {
           ++resultado;
           if (ch == '?')start = true;
           else start = false;
           contadora = 0;
           contadorb = 0;
       }
        else if ((ch == '.' or ch == '?' or ch == '!') and (contadora <= contadorb)) {
            if (ch == '?')start = true;
            else start = false;
            contadora = 0;
            contadorb = 0;
        }
    }
    }
cout << resultado << endl;
}
