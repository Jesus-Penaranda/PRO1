//Escriba un programa que, dados dos intervalos, indique si uno está dentro del otro 
//y calcule el intervalo correspondiente a su intersección, o indique que está vacío.

#include <iostream>
using namespace std;


int main() {
    int a1, b1 , a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
    if (a1 == a2 and b1 == b2) cout << "= , [" << a1 << ',' << b2 << ']' << endl;
    else if (b1 < a2 or a1 > b2) cout << "? , []" << endl;
    else {
        if (a2 <= a1 and b1 <= b2) cout << "1 , [";
        else if (a1 <= a2 and b2 <= b1) cout << "2 , [";
        else cout << "? , [";
        
        if (a1 >= a2) cout << a1;
        else cout << a2;
        cout << ',';
        if (b1 <= b2) cout << b1;
        else cout << b2;
        cout << ']' << endl;
    }
  

}