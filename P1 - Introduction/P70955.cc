//Pasar años (a), dias(b), horas(c), minutos(d) y segundos(e) a segundos(f)

#include<iostream>

using namespace std;

int main(){

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int f = ( a*31536000 ) + ( b*86400 ) + ( c*3600 ) + ( d*60 ) + e;
    cout << f << endl;
}