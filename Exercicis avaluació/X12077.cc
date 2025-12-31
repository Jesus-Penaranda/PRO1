// Programa que cuenta el numero de subsecuencias felices a posiciones crecientes en matrices.
// Entrada:
// La entrada tiene varios casos. Cada caso comienza con una linea con dos naturales positivos n,m.
// Despues vienen n lineas con m caracteres cada una, escogidos de entre {’:’,’-’,’)’}.
// Casos consecutivos estan separados por una linea en blanco.
// Salida:
// Para cada caso, el programa escribe en una linea el numero de subsecuencias felices a 
// posiciones crecientes de la matriz de entrada.

#include <iostream>
#include <vector>

using namespace std;

// Funcion para contar subsecuencias felices a posiciones crecientes en una matriz
// pre: matriz es una matriz de caracteres de tamaño n x m
// post: devuelve el numero de subsecuencias felices a posiciones crecientes en la matriz
int contarSubsecuenciasFelices(vector<string>& mat, int n, int m) {
    int contador = 0;
    vector<int> pos1(m, 0);
    vector<int> pos2(m, 0);

    for (int i = 0; i < n; ++i) {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < m; ++j) {
            sum1 += pos1[j];
            sum2 += pos2[j];

            if (mat[i][j] == ':') 
            ++pos1[j];
            else if (mat[i][j] == '-') 
            pos2[j] += sum1 - pos1[j];
            else if (mat[i][j] == ')') 
            contador += sum2 - pos2[j];
        }
    }
    return contador;
}

int main() {
    int n, m;
    // Leer el tamaño de la matriz
    while (cin >> n >> m) {
        // Leer la matriz
        vector<string> mat(n);
        for (int i = 0; i < n; ++i) cin >> mat[i];
        // Contar subsecuencias felices e imprimir el resultado
        int resultado = contarSubsecuenciasFelices(mat, n, m);
        cout << resultado << endl;
    }
}