// Programa que devuelve los digitos pares sumados mas 1.
// Input: La entrada tiene un número arbitrario de casos. Cada caso contiene un
// natural positivo en una línea.
// Output: Para cada caso, la salida tiene una línea con el correspondiente número
// resultante de sumar 1 a los dígitos pares.

#include<iostream>
using namespace std;

int main () {
     int num;
     while (cin >> num) {
         int num_sumado = 0;
         int par = 0;
         int i = 1;
         while (num > 0) {
             if ((num%10) % 2 == 0) par = num%10 + 1; // Es par, per tant, sumem.
             else par = num%10; // Es impar per tant no sumem
             num_sumado += par*i;
             num /= 10;
             i *= 10;
        }
        cout << num_sumado << endl;
    }
}
