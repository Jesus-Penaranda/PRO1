#include <iostream>
using namespace std;

bool es_any_de_traspas(int year){
    return ((year%4 ==0 and year%100 !=0)
           or (year%100 == 0 and (year/100)%4 ==0));
}

int main()
{
    int a;
    while (cin >> a)
        cout << (es_any_de_traspas(a) ? "true" : "false") << endl;

    return 0;
}
