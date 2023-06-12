#include <iostream>
#include <iomanip>
using namespace std;


int main() {

string VENDEDOR;
double SALARIOFIXO, TOTALVENDAS;

cin >> VENDEDOR;
cin >> SALARIOFIXO;
cin >> TOTALVENDAS;

double COMISSAO = TOTALVENDAS*0.15;
double TOTAL = COMISSAO + SALARIOFIXO;

cout << fixed << setprecision(2);
cout << "TOTAL = R$ " << TOTAL << endl;

return 0;
}
