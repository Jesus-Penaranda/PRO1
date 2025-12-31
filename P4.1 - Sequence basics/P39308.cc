//P39308: indicar els divisors d'un numero x

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        cout << "divisors de " << x << ": ";
        for (int i = 1; i <= sqrt(x); ++i) {
            if (i == 1) cout << i;
            else if (x % i == 0) cout << ' ' << i;
        }
        for (int j = sqrt(x); j > 0; --j) {
            if (x % j == 0 and j != sqrt(x)) cout << ' ' << x / j;
        }
        cout << endl;
    }
}