#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    return (year % 4 == 0 and year % 100 != 0) or (year % 100 == 0 and (year / 100) % 4 == 0);
}

bool is_valid_date(int d, int m, int y) {
    if (m == 2) { // febrero: comprobamos si es bisiesto o no
        if (d >= 1 and d <= 28) return true;
        else if (d == 29 and is_leap_year(y)) return true;
    }
    else if ((d >= 1 and d <= 31) and (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12))
        return true; // meses con 31 días
    else if ((d >= 1 and d <= 30) and (m == 4 or m == 6 or m == 9 or m == 11))
        return true; // meses con 30 días
    return false;
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    cout << is_valid_date(d, m, y) << endl;
    return 0;
}

