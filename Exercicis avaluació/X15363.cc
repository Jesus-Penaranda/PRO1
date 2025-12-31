// Programa que crea una función recursiva para imprimir rombos.
// Utiliza una función llamada imprimirRombos para generar patrones
// de asteriscos en forma de rombos. El programa permite ingresar
// diferentes niveles para ajustar el tamaño de los rombos y separa
// conjuntos de rombos con líneas en blanco.

#include <iostream>
using namespace std;

// Función para imprimir una línea con espacios y asteriscos
void fila (int espacios, int asteriscos) {
    for (int i = 0; i < espacios; ++i) cout << ' ';

    for (int i = 1; i <= asteriscos; ++i) cout << '*';

    cout << endl;
}

// Función recursiva para imprimir un rombo
void imprimirRombos (int nivel, int anchoTotal) {
    // Cálculo de la anchura del rombo
    int anchura = 2 * nivel - 1;

    // Caso base: cuando el rombo tiene tamaño 1
    if (nivel == 1)
        fila (anchoTotal / 2, 1);
    else {
        // Llamada recursiva para el rombo superior
        imprimirRombos(nivel - 1, anchoTotal);

        // Parte superior del rombo
        for (int i = 3; i < anchura - 1; i += 2) fila ((anchoTotal - i) / 2, i);

        // Parte media del rombo (líneas más largas)
        fila ((anchoTotal - anchura) / 2, anchura);

        // Parte inferior del rombo
        for (int i = anchura - 2; i > 2; i -= 2) fila ((anchoTotal - i) / 2, i);

        // Llamada recursiva para el rombo inferior
        imprimirRombos (nivel - 1, anchoTotal);
    }
}

int main () {
    int nivel;

    // Bucle para procesar cada caso
    while (cin >> nivel) {
        // Llamada inicial a la función recursiva para imprimir rombos
        imprimirRombos(nivel, 2 * nivel - 1);

        // Imprimir línea en blanco entre conjuntos de rombos
        cout << endl;
    }
}



