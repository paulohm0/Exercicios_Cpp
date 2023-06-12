#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double A, B, C;
cin >> A >> B >> C;

double AreaTriangulo = (A*C) / 2;
double AreaCirculo = 3.14159 * (C*C);
double AreaTrapezio = ((A+B)*C) / 2;
double AreaQuadrado = B * B;
double AreaRetangulo = A * B;

cout << fixed << setprecision(3);
cout << "TRIANGULO: " << AreaTriangulo << endl;
cout << "CIRCULO: " << AreaCirculo << endl;
cout << "TRAPEZIO: " << AreaTrapezio << endl;
cout << "QUADRADO: " << AreaQuadrado << endl;
cout << "RETANGULO: " << AreaRetangulo << endl;

return 0;

}