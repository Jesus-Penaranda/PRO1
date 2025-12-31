#include<iostream>
#include<vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> numeros(n);
    int num;
    for (int i = 0; i < n; ++i) {
    cin >> num;
    numeros[i] = num;
    }
    int contador = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (numeros[n - 1] == numeros[i]) ++contador;
    }
    cout << contador << endl;
}