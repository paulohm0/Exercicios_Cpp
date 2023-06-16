/*
A empresa ABC resolveu conceder um aumento de salários a seus 
funcionários de acordo com a tabela abaixo:

Leia o salário do funcionário e calcule e mostre o novo salário, bem 
como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de 
reajuste (ambos devem ser apresentados com 2 casas decimais) e o 
percentual de reajuste ganho, conforme exemplo abaixo.
https://www.beecrowd.com.br/judge/pt/problems/view/1048
*/
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