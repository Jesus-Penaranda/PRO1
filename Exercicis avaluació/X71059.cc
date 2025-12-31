// Input:El programa forma equipos equitativos con programadores rusos y estadounidenses según el 
// nivel y nombre, y repite este proceso para varios casos, donde cada equipo tiene k miembros. 
// La entrada garantiza que la suma de programadores rusos y estadounidenses es divisible por k, 
// y no hay nombres repetidos entre ambas listas.
// Output:Para cada caso, hay que escribir (n1+n2)/k lineas. La primera contendrá la lista de nombres 
// del primer equipo en orden lexicográfico. La segunda contendrá la lista de nombres del segundo equipo 
// en orden lexicográfico. I así sudesivamente. Después de la salida de cada caso hay una linea en blanco.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Programador {
    string nombre;
    int nivel;
};

// Función de comparación para ordenar cadenas de texto lexicográficamente
// Pre: a y b son cadenas de texto válidas.
// Post: Devuelve true si a es menor que b en orden lexicográfico.
bool compararNombres(string a, string b) {
    return a < b;
}

// Función principal del programa
int main() {
    int k;

    while (cin >> k) {
        int n1, n2;

        // Entrada de programadores rusos
        cin >> n1;
        vector<Programador> listaRusos(n1);
        for (int i = 0; i < n1; ++i) {
            cin >> listaRusos[i].nombre >> listaRusos[i].nivel;
        }

        // Entrada de programadores americanos
        cin >> n2;
        vector<Programador> listaAmericanos(n2);
        for (int i = 0; i < n2; ++i) {
            cin >> listaAmericanos[i].nombre >> listaAmericanos[i].nivel;
        }

        int i = 0;
        int j = 0;
        int contadorRusos = 0;
        int contadorAmericanos = 0;
        vector<string> equipo(k);

        // Proceso de formación de equipos
        for (int aux = 0; aux < n1 + n2; ++aux) {
            int indice = aux % k;

            if (j == n2) {
                equipo[indice] = listaRusos[i].nombre;
                ++i;
                ++contadorRusos;
            } else if (i == n1) {
                equipo[indice] = listaAmericanos[j].nombre;
                ++j;
                ++contadorAmericanos;
            } else if (listaRusos[i].nivel > listaAmericanos[j].nivel) {
                equipo[indice] = listaRusos[i].nombre;
                ++i;
                ++contadorRusos;
            } else if (listaRusos[i].nivel < listaAmericanos[j].nivel) {
                equipo[indice] = listaAmericanos[j].nombre;
                ++j;
                ++contadorAmericanos;
            } else if ((listaRusos[i].nivel == listaAmericanos[j].nivel)) {
                if (contadorRusos < contadorAmericanos) {
                    equipo[indice] = listaRusos[i].nombre;
                    ++i;
                    ++contadorRusos;
                } else if (contadorRusos > contadorAmericanos) {
                    equipo[indice] = listaAmericanos[j].nombre;
                    ++j;
                    ++contadorAmericanos;
                } else {
                    if (listaRusos[i].nombre < listaAmericanos[j].nombre) {
                        equipo[indice] = listaRusos[i].nombre;
                        ++i;
                        ++contadorRusos;
                    } else {
                        equipo[indice] = listaAmericanos[j].nombre;
                        ++j;
                        ++contadorAmericanos;
                    }
                }
            }

            // Muestra el equipo actual si se ha formado completamente
            if ((aux + 1) % k == 0) {
                // Ordena y muestra los nombres de los programadores en el equipo
                sort(equipo.begin(), equipo.end(), compararNombres);

                for (int z = 0; z < k; ++z) {
                    cout << equipo[z];
                    if (z != k - 1) cout << ' ';
                }
                cout << endl;

                // Reinicia el equipo y los contadores
                fill(equipo.begin(), equipo.end(), "");
                contadorRusos = 0;
                contadorAmericanos = 0;
            }
        }

        cout << endl;
    }
}
