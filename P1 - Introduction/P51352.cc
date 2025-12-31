//Di quien gana el enfrentamiento, o si se produce un empate entre agua, viento y piedra.

#include<iostream>
using namespace std;

int main() {
    char x;
    char y;
    cin >> x >> y;

    if (x == y) {
        cout << "-" << endl;
    }

    else if ((x == 'A' and y == 'P') or (x == 'P' and y == 'V') 
    or (x == 'V' and y == 'A')) {
        cout << "1" << endl;
    }

    else cout << "2" << endl;
}