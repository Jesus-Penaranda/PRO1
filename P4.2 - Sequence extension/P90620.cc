#include<iostream>


using namespace std;

int main() 
{
    int a,b,c;
    bool trobat = false;
    cin >> a >> b >> c;
    while (not trobat and c != 0) 
    {
        if(b > 3143 and b > a and b > c) trobat = true;
        a = b;
        b = c;
        cin >> c;
    }
    if (trobat) cout << "SI";
    else cout << "NO";
    cout << endl;
}