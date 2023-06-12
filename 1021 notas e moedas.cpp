#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double entrada;
cin >> entrada;

int temp = entrada*100;
int t = temp / 100;
int p = temp%100;

 cout << "NOTAS:" << endl;
int notas[6] = {100, 50, 20, 10, 5, 2};
for (int i=0; i<6; i++) {
    cout << t / notas[i] << " nota(s) de R$ " << notas[i] << ".00" << endl;
    t = t%notas[i];
}
p = t*100 + p;

 cout << "MOEDAS:" << endl;
int moedas[6] = {100, 50, 25, 10, 5, 1};
for (int i=0; i<6; i++) {
    cout << fixed << setprecision(2);
    cout << p / moedas[i] << " moeda(s) de R$ " << moedas[i] / 100.0 << endl;
    p = p%moedas[i];
}

    return 0;
}
