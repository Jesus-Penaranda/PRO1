// Programa que indica la segunda palabra mayor alfabeticamente

#include <iostream>
using namespace std;

int main() {
    string primeraMax, segundaMax, palabra, temp;
    cin >> primeraMax >> segundaMax;

    if (segundaMax > primeraMax) {
        temp = segundaMax;
        segundaMax = primeraMax;
        primeraMax = temp;
    }

    while (cin >> palabra) {
        if (palabra != segundaMax and palabra != primeraMax) {
            if (palabra > segundaMax) {
                if (palabra > primeraMax) {
                    segundaMax = primeraMax;
                    primeraMax = palabra;
                } else
                    segundaMax = palabra;
            } else if (primeraMax == segundaMax)
                segundaMax = palabra;
        }
    }

    cout << segundaMax << endl;
}
