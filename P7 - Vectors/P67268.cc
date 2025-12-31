#include<iostream>
#include<vector>

using namespace std;

int main() 
{
    int n, num;
    
    while(cin >> n) 
    {
        bool start = true;
        vector<int> reverse(n);
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            reverse[i] = num;
        }
        for(int i = n - 1; i >= 0; i--) 
        {
            if(start) 
            {
            cout << reverse[i];
            start = false;
            }
            else cout << ' ' << reverse[i];
        }
        cout << endl;
    }
}