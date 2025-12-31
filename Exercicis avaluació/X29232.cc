// Programa que lee cuatro enteros y comprueba que dos de ellos son iguales
// y los dos restantes diferentes a cualquier otro.
// Input: cuatros enteros en una linea.
// Output: si dos de los enteros coinciden y los otros dos no, impimir YES, en caso
// contrario imprimir NO.

#include<iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    cin >> num1 >> num2 >> num3 >> num4;
    bool igual = false;
    if((num1 == num2 or num1 == num3 or num1 == num4) and (num2 != num3 and num3 != num4 and num2 != num4))igual = true;
    else if((num2 == num1 or num2 == num3 or num2 == num4) and (num1 != num3 and num3 != num4 and num1 != num4))igual = true;
    else if((num3 == num1 or num3 == num2 or num3 == num4) and (num2 != num1 and num2 != num4 and num1 != num4))igual = true;
    else if((num4 == num1 or num4 == num3 or num4 == num2) and (num1 != num2 and num2 != num3 and num1 != num3))igual = true;

    if (igual) cout << "YES" << endl;
    else cout << "NO" << endl;
}
