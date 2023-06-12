#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

double A, B ,C;
cin >> A >> B >> C;
double delta, bskraRaiz1, bskraRaiz2;

delta = pow(B,2)-(4*A*C);
bskraRaiz1 =((-B)+sqrt(delta))/(2*A);
bskraRaiz2 =((-B)-sqrt(delta))/(2*A);
  
if (A==0 || delta<0) {
	cout << "Impossivel calcular" << endl;
} else {
  bskraRaiz1 =((-B)+sqrt(delta))/(2*A);
  bskraRaiz2 =((-B)-sqrt(delta))/(2*A);
  
  cout << fixed << setprecision(5);
  cout << "R1 = " << bskraRaiz1 << endl;
  cout << "R2 = " << bskraRaiz2 << endl;
}

	return 0;
}