#include <iostream>
#include <iomanip>
using namespace std;

double multiplc (double x, double y) {
    return x * y;
}
int main() {

int codigo, quant;
double preco, total;
cin >> codigo >> quant;

switch (codigo) {
    case 1: preco = 4.00; break;
    case 2: preco = 4.50; break;
    case 3: preco = 5.00; break;
    case 4: preco = 2.00; break;
    case 5: preco = 1.50; break;
}
cout << fixed << setprecision(2);
total = multiplc (preco,quant);

cout << "Total: R$ " << total << endl;

    return 0;
}