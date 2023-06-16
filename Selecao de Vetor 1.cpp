/*
Faça um programa que leia um vetor A[100]. No final, mostre todas as 
posições do vetor que armazenam um valor menor ou igual a 10 e o valor 
armazenado em cada uma das posições.

Entrada
A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Saída
Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde 
i é a posição do vetor e x é o valor armazenado na posição, com uma casa 
após o ponto decimal.
https://www.beecrowd.com.br/judge/pt/problems/view/1174
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double A[100];
double entrada;

for (int i=0; i<100; i++) {
     cin >> entrada;
     A[i] = entrada;
     cout << fixed << setprecision(1);
     if (entrada <=10) {  
     cout << "A[" << i << "] = " << A[i] << endl; }
}
    return 0;
}