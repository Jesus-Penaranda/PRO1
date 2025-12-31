// Programa para contar subpalabras felices en matrices
// Entrada: Varios casos, cada uno con n y m seguido de una matriz de tamaño n x m
//           compuesta por caracteres {’:’,’-’,’(’,’)’,’"’,’v’,'|','^'}.
// Salida:  Para cada caso, imprime el número de subpalabras felices en la matriz.
//           Los casos estan separados por una linea en blanco.

#include <iostream>
#include <vector>

using namespace std;

// Funcion para contar subpalabras felices en una matriz
// pre: matriz es una matriz valida de tamaño n x m
// post: devuelve el numero de subpalabras felices en la matriz
int contarSubpalabrasFelices(const vector<string>& matriz, int n, int m) {
    int contador = 0;

    // Iterar sobre cada elemento de la matriz
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // Verificar si hay un patron feliz de tres caracteres en la fila
            if ((j + 2 < m) and
                ((matriz[i][j] == ':' and matriz[i][j + 1] == '-' and matriz[i][j + 2] == ')') or 
                (matriz[i][j] == '(' and matriz[i][j + 1] == '-' and matriz[i][j + 2] == ':'))) ++contador;
            
            // Verificar si hay una flecha vertical feliz en columnas adyacentes
            else if ((i + 2 < n) and
                     (matriz[i][j] == '"' and matriz[i + 1][j] == '|' and matriz[i + 2][j] == 'v')) ++contador;
            
            // Verificar si hay una flecha hacia arriba feliz en columnas adyacentes
            else if ((i + 2 < n) and
                     (matriz[i][j] == '^' and matriz[i + 1][j] == '|' and matriz[i + 2][j] == '"')) ++contador;
            
        }
    }
    return contador;
}

int main() {

    int n, m;

    // Leer el tamaño de la matriz
    while (cin >> n >> m) {
        // Leer la matriz
        vector<string> matriz(n);
        for (int i = 0; i < n; ++i) cin >> matriz[i];
        
        // Contar subpalabras felices e imprimir el resultado
        int resultado = contarSubpalabrasFelices(matriz, n, m);
        cout << resultado << endl;
    }
}




  


 



