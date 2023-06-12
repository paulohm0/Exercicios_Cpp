#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double Tempo, VelocMedia;
int ConsMedio = 12;
cin >> Tempo >> VelocMedia;

double Litros = (VelocMedia*Tempo) / ConsMedio;

cout << fixed << setprecision(3);
cout << Litros << endl;

return 0;
}