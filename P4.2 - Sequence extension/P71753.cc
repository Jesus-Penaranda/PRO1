#include<iostream>

using namespace std;

int main() 
{
    int max, n, num;
    while(cin >> n and cin >> num) 
    {
        max = num;
        for (int i = 1; i < n; i++) 
        {
            cin >> num;
            if (num > max) max = num;
        }
        cout << max << endl;
    }
}