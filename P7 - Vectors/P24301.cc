#include <iostream>
#include <vector>
using namespace std;


vector<int> concatenacio(const vector<int> & V1, const vector<int> & V2)
{
    int n = V1.size();
    int m = V2.size();
    vector<int> conc = V1;
    for(int i = 0; i < m; i++) conc.push_back(V2[i]);
    return conc;
}


