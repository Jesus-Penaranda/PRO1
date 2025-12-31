// Calcula el area de dos figuras, rectangulo o circulo con 6 decimales.

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    cout.setf(ios :: fixed);
    cout.precision(6);
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        double pi = M_PI;
        string figura;
        double a, b, area;
        cin >> figura;
        if (figura == "rectangle") {
            cin >> a >> b;
            area = a*b;
        } else {
            cin >> a;
            area = a*a*pi;
        }
        cout << area << endl;
    }
}