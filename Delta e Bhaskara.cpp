/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes 
da equação de Bhaskara. Se não for possível calcular as raízes, 
mostre a mensagem correspondente “Impossivel calcular”, caso 
haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, 
apresente a mensagem "Impossivel calcular". Caso contrário,
imprima o resultado das raízes com 5 dígitos após o ponto, 
com uma mensagem correspondente conforme exemplo abaixo. 
Imprima sempre o final de linha após cada mensagem.
https://www.beecrowd.com.br/judge/pt/problems/view/1036
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

double A, B ,C;
cin >> A >> B >> C;
double delta, bskraRaiz1, bskraRaiz2;

delta = pow(B,2)-(4*A*C);
bskraRaiz1 =((-B)+sqrt(delta))/(2*A);
bskraRaiz2 =((-B)-sqrt(delta))/(2*A);
  
if (A==0 || delta<0) {
	cout << "Impossivel calcular" << endl;
} else {
  bskraRaiz1 =((-B)+sqrt(delta))/(2*A);
  bskraRaiz2 =((-B)-sqrt(delta))/(2*A);
  
  cout << fixed << setprecision(5);
  cout << "R1 = " << bskraRaiz1 << endl;
  cout << "R2 = " << bskraRaiz2 << endl;
}

	return 0;
}