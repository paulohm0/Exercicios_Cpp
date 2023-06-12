#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

float X1, Y1, X2, Y2;
cin >> X1 >> Y1;
cin >> X2 >> Y2;


double DISTANCIA = sqrt( pow(X2 - X1,2) + pow(Y2 - Y1,2) );

cout << fixed << setprecision(4);
cout << DISTANCIA << endl;

return 0;

}