#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int N, Horas=0, Minutos=0, Segundos=0;
cin >> N;
Horas = N/3600;
Minutos = (N%3600) / 60;
Segundos = (N%3600) %60;

cout << Horas << ":" << Minutos << ":" << Segundos << endl;

return 0;

}