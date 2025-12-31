//Sumar las últimas tres cifras del número

#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a = n % 10;
    int b = ((n % 100) - a) / 10;
    int c = ((n % 1000) - (n % 100)) / 100;
    cout << a + b + c << endl;
}