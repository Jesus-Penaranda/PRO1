#include <iostream>
using namespace std;


int main() {
    int n;
    int ast = 1;
    cin >> n;
    int suma = n - 2;
    for (int j = 1; j <= n - 1;++j) {
        cout << '+';
    }
    cout << '/' << endl;
    for (int k = 1; k <= n - 1; ++k) {
        for (int i = 1; i <= suma; ++i) cout << '+';
        cout << '/';
        for (int h = 1; h <= ast; ++h) cout << '*';
        cout << endl;
        ++ast;
        --suma;
        
    }
}