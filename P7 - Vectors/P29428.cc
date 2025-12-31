#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funció per verificar si s1 conté s2
bool conte(string s1, string s2) {
    if (s1.length() < s2.length()) {
        return false;  // Si la longitud de s1 és menor que la de s2, s2 no pot ser contingut a s1
    }

    // Verificar si s1 conté s2
    for (size_t i = 0; i <= s1.length() - s2.length(); ++i) {
        if (s1.substr(i, s2.length()) == s2) {
            return true;  // Sí, s1 conté s2
        }
    }

    return false;  // No, s1 no conté s2
}

int main() {
    // Llegir el nombre de paraules
    int n;
    cin >> n;

    // Llegir les paraules
    vector<string> paraules(n);
    for (int i = 0; i < n; ++i) {
        cin >> paraules[i];
    }

    // Imprimir les paraules i les paraules contingudes
    for (int i = 0; i < n; ++i) {
        cout << paraules[i] << ":";

        // Verificar per a cada paraula si està continguda a la paraula actual
        for (int j = 0; j < n; ++j) {
            if (conte(paraules[i], paraules[j])) {
                cout << " " << paraules[j];
            }
        }

        cout << endl;
    }
}

