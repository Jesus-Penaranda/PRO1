#include <iostream>
using namespace std;
int suma_digits(int x) {
    if (x < 10) return x;
    else return x%10 + suma_digits(x/10);
}
int reduccio_digits(int n) {
    int suma = suma_digits(n);
    if (suma < 10) return suma;
    else return reduccio_digits(suma);


}

int main()
{
    int n;
    while (cin >> n) {
        cout << reduccio_digits(n) << endl;
    }
    return 0;
}
