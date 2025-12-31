//Imprimir entera, entera superior y redondear

#include<iostream>

using namespace std;

int main() {

    double n;
    int a, b, c;
    cin >> n;
    a = n;
   
    double d = n - a;

    if ( d != 0 ) {

        b =  a + 1;
    }
    else {

        b = a;
    }
    
    if ( d >= 0.5 ) {

        c = a + 1;
    }

    else {

        c = a;
    }

    cout << a << " " << b << " " << c << endl;
}