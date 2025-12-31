//P37760: calcular el sinus i el cosinus d'un angle

#include<iostream>
#include<cmath>

using namespace std;

double seno (double x) {
    return sin ( x * M_PI / 180.0);
}
double coseno (double x) {
    return  cos ( x * M_PI / 180.0);
}

int main() {
    cout.setf(ios :: fixed);
    cout.precision(6);
    double angulo;
    while (cin >> angulo) {
        cout << seno(angulo) << ' ' << coseno(angulo) << endl;
    }
}