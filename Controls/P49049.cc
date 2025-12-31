/*
    Entrada:

    L’entrada és un real x seguit d’una unitat, que només pot ser “milles” o bé “quilometres”.

    Sortida:

    La sortida és l’equivalent de x milles en quilòmetres si l’entrada era en milles, 
    o l’equivalent de x quilòmetres en milles si l’entrada era en quilòmetres. Seguiu el format dels exemples.
*/

#include<iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double distance;
    string measure;

    cin >> distance >> measure;

    if (measure == "milles") 
    {
        distance *= 1.6093;
        measure = "quilometres";
    }
    else 
    {
        distance /= 1.6093;
        measure = "milles";
    }

    cout << distance << ' ' << measure << endl;
}
