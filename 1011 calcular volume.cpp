#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double RaioEsfera;
cin >> RaioEsfera;
double VOLUME = (4/3.0) * 3.14159 * (RaioEsfera*RaioEsfera*RaioEsfera);

cout << fixed << setprecision(3);
cout << "VOLUME = " << VOLUME << endl;

return 0;

}