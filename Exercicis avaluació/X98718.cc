// Input:  contiene una única linea con una secuencia de carácteres consecutivos sobre {a,b}. 
// Output: contiene la primera subpalabra de tamaño 3 que se repite, y la posición del primer 
// carácter de la primera repetición. Esos datos deben aparecer en una linea y separados 
// por un espacio en blanco.

#include <iostream>
using namespace std;

int main() {
    char x = ' ';
    char y = ' '; 
    char z;
    int contador = 0;
    int caaa = 0, caab = 0, caba = 0, cabb = 0, cbab = 0, cbbb = 0, cbba = 0, cbaa = 0;
    bool encontrado = false;

    cin >> z; 

    while (not encontrado) {
        if (x == 'a' and y == 'a' and z == 'a') ++caaa;
        else if (x == 'a' and y == 'a' and z == 'b') ++caab;
        else if (x == 'a' and y == 'b' and z == 'a') ++caba;
        else if (x == 'a' and y == 'b' and z == 'b') ++cabb;
        else if (x == 'b' and y == 'a' and z == 'b') ++cbab;
        else if (x == 'b' and y == 'b' and z == 'b') ++cbbb;
        else if (x == 'b' and y == 'b' and z == 'a') ++cbba;
        else if (x == 'b' and y == 'a' and z == 'a') ++cbaa;

        if (caaa == 2 or caab == 2 or caba == 2 or cabb == 2 or cbab == 2 or 
            cbbb == 2 or cbba == 2 or cbaa == 2) encontrado = true;
            
        if (not encontrado) {
            ++contador;
            x = y;
            y = z;
            cin >> z;
        }
    }
    cout << x << y << z << ' ' << contador - 2 << endl;
}