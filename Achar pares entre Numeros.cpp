/*
Faça um programa que leia 5 valores inteiros. Conte quantos destes 
valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.


Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade 
de valores pares lidos.
https://www.beecrowd.com.br/judge/pt/problems/view/1065
*/

#include <iostream>
using namespace std;

int main() {

  int A, B, C, D, E;
  int qtd = 0;

  cin >> A >> B >> C >> D >> E;

  if (A % 2 == 0) {
    qtd++;
  }
  if (B % 2 == 0) {
    qtd++;
  }
  if (C % 2 == 0) {
    qtd++;
  }
  if (D % 2 == 0) {
    qtd++;
  }
  if (E % 2 == 0) {
    qtd++;
  }

  cout << qtd << " valores pares" << endl;

  return 0;
  }
