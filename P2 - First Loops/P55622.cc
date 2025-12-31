//Programa que llegeix un nombre i que n’escrigui el nombre de dígits que té

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int digits = 1;
    cout << "The number of digits of " << n << " is ";

    while (n >= 10) {
        n /= 10;
        ++digits;
    }
    cout << digits << '.' << endl;
}