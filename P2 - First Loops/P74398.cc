//Entrada con un único número k, Escribe 15 líneas de la forma “Base x: y cifras.”, 
//donde x son los números del 2 al 16, y y es el número de cifras necesarias en base
//x para representar el número k. 

#include<iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    
    for (int i = 2; i <= 16; ++i) {
      int digit = 1; 
      int num = k/i;
        while (num != 0) {
          ++digit;
          num /= i;
        }
    cout << "Base " << i << ": " << digit << " cifras." << endl;
    }
}