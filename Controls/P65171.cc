// Input: L’entrada és un natural n≥ 2 seguit de n nombres reals x1, x2,…, xn.
// Output: Cal escriure el valor de la variança dels n nombres donats amb exactament 
// dos dígits desprès del punt decimal.

#include<iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    double a;
    double suma1 = 0;
    double suma2 = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a;
        suma1 += a*a;
        suma2 += a;
    }
    suma2 = suma2*suma2;
    double resultado = 1/(double(n)-1)*suma1 - 1/(double(n)*(n-1))*suma2;
    cout << resultado << endl;
    
}