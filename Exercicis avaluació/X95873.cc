/*
    Tenemos que encontrar el total de 'a' en una pregunta '?'
    y el total de 'b' en las exclamaciones '!'
*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    int a = 0, b = 0;
    int confirmed_counter_a = 0, confirmed_counter_b = 0;

    while (cin >> ch) 
    {
        if(ch == 'a') ++a;
        else if(ch == 'b') ++b;
        else if (ch == '.') 
        {
            a = 0;
            b = 0;
        }
        else if(ch == '?') 
        {
            confirmed_counter_a += a;
            a = 0;
            b = 0;
            
        }
        else 
        {
            confirmed_counter_b += b;
            a = 0;
            b = 0;
        }

    }
    cout << confirmed_counter_a << ' ' << confirmed_counter_b << endl;
}
