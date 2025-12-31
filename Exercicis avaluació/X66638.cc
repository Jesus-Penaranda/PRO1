// Este programa toma un número natural positivo x como entrada y calcula dos números, y y z.
// El número y está formado por la subsecuencia de dígitos impares de x, seguida de la 
// subsecuencia de dígitos pares de x, incluyendo los dígitos pares positivos. El número z 
// es el doble de y. Cada x de entrada produce una línea de salida con los valores 
// correspondientes de y y z, separados por un espacio en blanco.

#include<iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        int impar = 0;
        int par = 0;
        int i = 1;
        int p = 1;

        while (x > 0) {
            int num1 = x%10;  
            // Si el dígito es par y no es cero, lo sumamos a la parte "par".
            if ((num1%2 == 0) and (num1 != 0)) {
                par = num1*i + par;
                i *= 10;
            } 
            // Si el dígito es impar, lo sumamos a la parte "impar".
            else if (num1%2 != 0) {
                impar = num1*p + impar;
                p *= 10;
            }
            x /= 10;  
        }   
        int y = impar*i + par;
        int z = 2*y;
        cout << y << " " << z << endl;
    }   
}



