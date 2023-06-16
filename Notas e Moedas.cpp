/*
Leia um valor de ponto flutuante com duas casas decimais. 
Este valor representa um valor monetário. A seguir, calcule 
o menor número de notas e moedas possíveis no qual o valor 
pode ser decomposto. As notas consideradas são de 100, 
50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 
0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante 
N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias 
para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
https://www.beecrowd.com.br/judge/pt/problems/view/1021
*/
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
