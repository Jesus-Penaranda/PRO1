// Programa que lee expresiones booleanas de comparación entre una operación aritmética 
// entre naturales y un número natural, y determina si se evaluan a true o false.
// Input: NUM1 OPERADOR NUM2 COMPARADOR NUM3.
// donde num1, num2, num3 son naturales, operador es un operador de {+,-,*}, y 
// COMPARADOR es un operador de comparación de {<,>,<=,>=,==,!=}.
// Output: Para cada linea de entrada, la salida contiene true o false, 
// el valor booleano al que se evalua la expressión booleana que representa la linea.

#include <iostream>
using namespace std;

int main() {
    int num1; 
    int num2; 
    int num3;
    char operador; 
    string comparador;

    while (cin >> num1 >> operador >> num2 >> comparador >> num3) {
        int operacion = 0;
        if (operador == '+') operacion = num1 + num2;
        else if (operador == '-') operacion = num1 - num2;
        else operacion = num1 * num2;

        // Evalúa la condición y establece resultado como true o false.
        bool resultado = false;
        if (comparador == ">" and operacion > num3)
            resultado = true;
        else if (comparador == "<" and operacion < num3)
            resultado = true;
        else if (comparador == "<=" and operacion <= num3)
            resultado = true;
        else if (comparador == ">=" and operacion >= num3)
            resultado = true;
        else if (comparador == "==" and operacion == num3)
            resultado = true;
        else if (comparador == "!=" and operacion != num3)
            resultado = true;

        if (resultado) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
}
