/*
Com base na tabela abaixo, escreva um programa que leia o 
código de um item e a quantidade deste item. A seguir, calcule 
e mostre o valor da conta a pagar.

~tabela

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes 
ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " 
seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
https://www.beecrowd.com.br/judge/pt/problems/view/1038
*/
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