//P38045: calcular la arrel cuadrada y el quadrat d'un num

#include <iostream>
#include <cmath>

using namespace std;

int cuadrado (int x)  {
    return x*x;
}

double raiz (double x) {
    return sqrt(x);
}

int main() {
    cout.setf(ios :: fixed);
    cout.precision(6);
    int num;
    while (cin >> num) {
        cout << cuadrado(num) << ' ' << raiz(num) << endl;
    }
}