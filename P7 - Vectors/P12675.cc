#include<vector>
#include<iostream>

using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) 
{
    int contador = 0, i = 0, j = 0;
  
    while((i < int(X.size())) and (j < int(Y.size()))) 
    {
        if(X[i] == Y[j]) 
        {
            ++contador;
            ++j;
            ++i;
        }
        else if(X[i] < Y[j]) i++;
        else j++;
        
    }
    return contador;
}
