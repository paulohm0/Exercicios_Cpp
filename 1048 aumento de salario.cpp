#include <iostream>
#include <iomanip>
using namespace std;

void text(double novoSalario) {
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << novoSalario << endl;
}

int main() {

double salario;
double novoSalario;
cin >> salario;

if (salario <= 400) {
    novoSalario = salario + (0.15*salario);
    text(novoSalario);
    cout << "Reajuste ganho: " << 0.15*salario << endl;
    cout << "Em percentual: 15 %" << endl;
}
if (salario > 400 && salario <= 800) {
    novoSalario = salario + (0.12*salario);
    text(novoSalario);
    cout << "Reajuste ganho: " << 0.12*salario << endl;
    cout << "Em percentual: 12 %" << endl;
}
if (salario > 800 && salario <= 1200) {
    novoSalario = salario + (0.10*salario);
    text(novoSalario);
    cout << "Reajuste ganho: " << 0.10*salario << endl;
    cout << "Em percentual: 10 %" << endl;
}
if (salario > 1200 && salario <= 2000) {
    novoSalario = salario + (0.07*salario);
    text(novoSalario);
    cout << "Reajuste ganho: " << 0.07*salario << endl;
    cout << "Em percentual: 7 %" << endl;
}
if (salario > 2000) {
    novoSalario = salario + (0.04*salario);
    text(novoSalario);
    cout << "Reajuste ganho: " << 0.04*salario << endl;
    cout << "Em percentual: 4 %" << endl;
}

    return 0;
}