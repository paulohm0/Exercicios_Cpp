/*
Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os 
valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

Entrada
A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.

Saída
Para cada posição do vetor, escreva "X[i] = x", onde i é a posição do 
vetor e x é o valor armazenado naquela posição.
https://www.beecrowd.com.br/judge/pt/problems/view/1172
*/
#include <iostream>
using namespace std;

int main() {
int vetor[10];
int entrada;
for (int posicaoVetor=0; posicaoVetor < 10; posicaoVetor++) {
    cin >> entrada;
    if (entrada <= 0) {
        vetor[posicaoVetor] = 1; 
    } else {
        vetor[posicaoVetor] = entrada;
    }
    cout << "X[" << posicaoVetor << "] = " << vetor[posicaoVetor] << endl;
}
    return 0;
}

