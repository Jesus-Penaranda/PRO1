#include<iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double max, min;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        double div = 0;
        double x;
        double suma = 0;
        for (int j = 1; j <= m; ++j) {
            cin >> x;
            suma += x;
            ++div;
            if (j == 1){
            max = x;
            min = x;
            }
            else if (x >= max and x >= min) {
                max = x;
            }
            else if (x <= max and x <= min) min = x;
        }
        cout << min << ' ' << max << ' ' << suma / div << endl;;
    }
}