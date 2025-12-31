#include<iostream>
using namespace std;

int main()
{
    int num;
    
    while(cin >> num) 
    {
        int aux = num;
        int cifras = 0;
        while(aux > 0) 
        {
            aux/=10;
            ++cifras;
        }
        int suma = 0;
        for(int i = cifras; i >= 1; --i) 
        {
            suma += i*(num%10);
            num /= 10;
        }
        cout << suma << endl;
    }
}
