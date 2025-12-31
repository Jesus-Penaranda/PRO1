#include<iostream>
using namespace std;

void numeros(int n) {
    cout << n;
    if (n == 0) return;
        for(int j = 0; j < n; ++j) {
            numeros(n-1);
            cout << n;
        }    
}

int main (){
    int n;
    while(cin >> n){
    numeros(n);
    cout << endl;
    }
}