/*
Leia um valor inteiro correspondente à idade de uma pessoa 
em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano 
com 365 dias e todo mês com 30 dias. Nos casos de teste nunca 
haverá uma situação que permite 12 meses e alguns dias, 
como 360, 363 ou 364. Este é apenas um exercício com 
objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
https://www.beecrowd.com.br/judge/pt/problems/view/1020
*/
#include <iostream>
using namespace std;

int main()  {

int a;
int sobra;
cin >> a;

cout << a/365 << " ano(s)" << endl;
sobra = a%365;
cout << sobra/30 << " mes(es)" << endl;
sobra = sobra%30;
cout << sobra/1 << " dia(s)" << endl;

return 0;
}