// Dada una lista de n enteros v0,…,vn−1, y un string s de tamaño n y con caracteres ’+’ y ’-’, hemos
// de escribir el resultado de sumar o restar cada vi dependiendo de si el i-ésimo carácter de s es ’+’ o ’-’.
// La entrada comienza con un natural positivo n en una primera linea. En una segunda linea hay n enteros v0,…,vn.
// Después viene una secuencia de lineas, cada una con un string s de tamaño n y caracteres ’+’ o ’-’.

#include <iostream>
#include <vector>

using namespace std;

// Función para leer una secuencia de n números desde la entrada estándar.
vector<int> leerSecuenciaNumerica(int n) {
    vector<int> datos(n);
    for (int i = 0; i < n; ++i) {
        cin >> datos[i];
    }
    return datos;
}

int main() {
    // Lee la cantidad de elementos en la secuencia.
    int cantidadElementos;
    cin >> cantidadElementos;

    // Lee la secuencia de números.
    vector<int> numeros = leerSecuenciaNumerica(cantidadElementos);

    // Inicia un bucle para leer operaciones y calcular resultados.
    string operaciones;
    while (cin >> operaciones) {
        int resultado = 0;
        // Realiza operaciones aritméticas en la secuencia de números.
        for (int i = 0; i < cantidadElementos; ++i) {
            if (operaciones[i] == '+') resultado += numeros[i];
            else resultado -= numeros[i];
        }

        cout << resultado << endl;
    }
}

