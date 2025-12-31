/*
    Feu un programa que llegeixi dos naturals a i b i escrigui la divisió real de 
    a entre b, la divisió entera de a entre b, i el rest de la divisió entera de a entre b.

    Entrada:
    L’entrada són dos naturals a i b.

    Sortida:
    Si b=0, la sortida és una línia amb el text “divisio per zero”.
*/

#include<iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(3);

    int a, b;
    cin >> a >> b;

    if (b == 0) cout << "divisio per zero";
    else 
    {
        cout << double(a) / b << ' ' << a / b << ' ' << a % b;
    }
    cout << endl;
}
