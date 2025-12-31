// Este programa procesa las líneas de entrada que indican la edad de una persona
// y calcula su edad aparente restando un décimo de su edad real. Luego, muestra
// un mensaje indicando que la persona parece más joven de lo que realmente es.

#include<iostream>
using namespace std;

int main() {
    string x;
    string nombre;
    int edad;

    while (cin >> x >> x >> x >> nombre >> x >> x >> x >> edad >> x >> x) {
        int edad_aparentada = edad - edad / 10;
        cout << nombre << ", you look younger. I thought you were " 
            << edad_aparentada << " years old." << endl;
    }   
}
