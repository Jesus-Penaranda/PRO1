#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
        }
    }

    string type;
    while (cin >> type) {
        if (type == "row") {
            int r;
            cin >> r;
            cout << "row " << r << ":";
            for (int j = 0; j < m; ++j) {
                cout << " " << mat[r-1][j];
            }
            cout << endl;
        } 
        else if (type == "column") {
            int c;
            cin >> c;
            cout << "column " << c << ":";
            for (int i = 0; i < n; ++i) {
                cout << " " << mat[i][c-1];
            }
            cout << endl;
        } 
        else if (type == "element") {
            int r, c;
            cin >> r >> c;
            cout << "element " << r << " " << c << ": " << mat[r-1][c-1] << endl;
        }
    }
}