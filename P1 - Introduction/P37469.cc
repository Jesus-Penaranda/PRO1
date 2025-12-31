//Pasar un numero en segundos a horas, minutos y segundos

#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;
  int h = n / 3600;
  int m = (n - h*3600) / 60;
  int s = (n - h*3600) % 60;
  cout << h << " " << m << " " << s << endl;

}
