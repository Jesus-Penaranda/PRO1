// Programa que implementa la función recursiva que, dado un natural positivo n, 
// retorna la suma alternada simple 1−2+3−4+…+(−1)n+1· n. Esta es la cabecera.


#include <iostream>
using namespace std;

// Pre: n >= 1
// Post: Retorna 1-2+3-4+...+(-1)^(n+1)*n
int simpleAlternatedSum(int n) {
    // Caso base: cuando n es 1, retorna el único término en la serie.
    if (n == 1) {
        return 1;
    } else {
        // Llamada recursiva con el término actual y cambiando el signo.
        if (n % 2 == 0) {
            return -1 * n + simpleAlternatedSum(n - 1);
        } else {
            return 1 * n + simpleAlternatedSum(n - 1);
        }
    }
}

int main() {
   
    int n;
    cin >> n;
    cout << simpleAlternatedSum(n) << endl;
}
