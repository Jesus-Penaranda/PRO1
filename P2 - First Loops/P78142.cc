

#include<iostream>
using namespace std;

int main() {
    cout.setf(ios :: fixed);
    cout.precision(2);
    double a;
    int i = 0;
    double suma = 0;

    while(cin >> a) {
        suma += a;
        ++i;
    }
    cout << suma / i << endl;
}