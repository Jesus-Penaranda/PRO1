#include<iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a,b;
    
    for (int i = 0; i < n; i++) 
    {
        int contador = 0;
        cin >> a;
        while (a > 0) 
        {
            cin >> b;
            if (b > a) ++contador;
            a = b;
            
        }
        cout << contador << endl;
    }
}