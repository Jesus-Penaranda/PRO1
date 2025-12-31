

#include<iostream>
using namespace std;

int main() {
    cout.setf(ios :: fixed);
    cout.precision(4);

    int n;
    cin >> n;
    double harm = 0;

    for (int i = 1; i <= n; i++) {
        harm += double(1) / i;
    }

    cout << harm << endl;
}