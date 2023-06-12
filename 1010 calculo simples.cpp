#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int CODIGOPECA1, NUMEROPECA1;
double VALORUNIDPECA1;
cin >> CODIGOPECA1 >> NUMEROPECA1 >> VALORUNIDPECA1;

int CODIGOPECA2, NUMEROPECA2;
double VALORUNIDPECA2;
cin >> CODIGOPECA2 >> NUMEROPECA2 >> VALORUNIDPECA2;

double TOTAL1 = NUMEROPECA1*VALORUNIDPECA1;
double TOTAL2 = NUMEROPECA2*VALORUNIDPECA2;
double TOTAL = TOTAL1 + TOTAL2;

cout << fixed << setprecision(2);
cout << "VALOR A PAGAR: R$ " << TOTAL << endl;

return 0;

}