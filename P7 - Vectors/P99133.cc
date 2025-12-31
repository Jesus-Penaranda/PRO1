#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int casos;
    cin >> casos;

    vector<string> words(casos);

    for (int i = 0; i < casos; ++i) {
        cin >> words[i];
    }

    for (int i = casos - 1; i >= 0; --i) {
        string aux = words[i];
        reverse(aux.begin(), aux.end());
        cout << aux << endl;
    }
}