#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int KM;
float FUEL;
cin >> KM >> FUEL;

double ConsMedio = KM / FUEL;

cout << fixed << setprecision(3);
cout << ConsMedio << " km/l" << endl;

return 0;

}