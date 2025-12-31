// Input: La entrada tiene varios strings sobre {’:’,’-’,’(’,’)’}, cada uno en una linea.
// Output: Para cada caso, la salida tiene dos números separados por un espacio en blanco en una linea,
// el número de subsecuencias felices y el número de subsecuencias tristes.

#include <iostream>
#include <vector>

using namespace std;

// Pre: c1, c2, c3 son caracteres distintos entre sí.
// Post: devuelve el número de triples (i1, i2, i3) tales que 0 <= i1 < i2 < i3 < s.size() y
//               s[i1] = c1, s[i2] = c2, s[i3] = c3.
int numberSubsequences(const string &s, char c1, char c2, char c3) {
    int count = 0;
    int n = s.size();

    vector<int> count_c1(n, 0);
    vector<int> count_c1c2(n, 0);

    for (int i = 0; i < n; ++i) {
        if (s[i] == c1) {
            count_c1[i] = 1;
        }

        if (i > 0) {
            count_c1[i] += count_c1[i - 1];
        }

        if (s[i] == c2) {
            if (i > 0) count_c1c2[i] = count_c1[i - 1];
            else count_c1c2[i] = 0;
        }

        if (i > 0) {
            count_c1c2[i] += count_c1c2[i - 1];
        }

        if (s[i] == c3) {
            count += count_c1c2[i];
        }
    }

    return count;
}

// Pre:
// Post: devuelve el número de triples (i1, i2, i3) tales que 0 <= i1 < i2 < i3 < s.size() y
//               either s[i1] = ':', s[i2] = '-', s[i3] = ')' o s[i1] = '(', s[i2] = '-', s[i3] = ':'.
int numberHappySubsequences(const string &s) {
    int happyCount = 0;
    happyCount += numberSubsequences(s, ':', '-', ')');
    happyCount += numberSubsequences(s, '(', '-', ':');
    return happyCount;
}

// Pre:
// Post: devuelve el número de triples (i1, i2, i3) tales que 0 <= i1 < i2 < i3 < s.size() y
//               either s[i1] = ':', s[i2] = '-', s[i3] = '(' o s[i1] = ')', s[i2] = '-', s[i3] = ':'.
int numberSadSubsequences(const string &s) {
    int sadCount = 0;
    sadCount += numberSubsequences(s, ':', '-', '(');
    sadCount += numberSubsequences(s, ')', '-', ':');
    return sadCount;
}

int main() {
    string input;

    while (cin >> input) {
        int happyCount = numberHappySubsequences(input);
        int sadCount = numberSadSubsequences(input);

        cout << happyCount << ' ' << sadCount << endl;
    }
}
