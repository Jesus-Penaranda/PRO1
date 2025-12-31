//Escriba un programa que agregue un segundo al tiempo de un reloj, dadas sus horas, minutos y segundos.

#include<iostream>
using namespace std;

int main(){
     
     int hores;
     int minuts;
     int segons;
     cin >> hores >> minuts >> segons;

     int SEGONS_TOTALS = hores*3600 + minuts*60 + (segons + 1);

     int HORES = ((SEGONS_TOTALS / 60 ) / 60) % 24;
     int MINUTS = (SEGONS_TOTALS / 60 ) % 60;
     int SEGONS = (SEGONS_TOTALS % 60);
     
     cout << HORES / 10 << HORES % 10 << ":"; 
     cout << MINUTS / 10 << MINUTS % 10 << ":"; 
     cout << SEGONS / 10 << SEGONS % 10 << endl; 

}
