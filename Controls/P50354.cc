#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    int n; // Número de nombres
    while (cin >> n) 
    {
        vector<string> nombres(n); // Vector para almacenar los nombres

        // Leer los nombres
        for (int i = 0; i < n; ++i) 
        {
            cin >> nombres[i];
        }

        int m; // Número de prefixos
        cin >> m;

        vector<string> prefixos(m); // Vector para almacenar los prefixos
        
        // Leer los prefixos
        for (int i = 0; i < m; ++i) 
        {
            cin >> prefixos[i];
        }

        // Procesar cada prefixo
        for (const string &prefixo : prefixos) 
        {
            cout << "Comencen amb " << prefixo << ':' << endl;
            for(string nom : nombres) 
            {
                string aux_nom = "";
                for (int j = 0; j < prefixo.length(); ++j) 
                {
                    aux_nom += nom[j];
                }
                if(aux_nom == prefixo) 
                {
                cout << nom << endl;
                }
            }
        }      
    }
}
