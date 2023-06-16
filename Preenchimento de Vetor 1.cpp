/*
Leia um valor e faça um programa que coloque o valor lido na primeira 
posição de um vetor N[10]. Em cada posição subsequente, coloque o 
dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, 
os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre 
o vetor em seguida.

Entrada
A entrada contém um valor inteiro (V<=50).

Saída
Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do 
vetor e X é o valor armazenado na posição i. O primeiro número 
do vetor N (N[0]) irá receber o valor de V.
https://www.beecrowd.com.br/judge/pt/problems/view/1173
*/
#include <iostream>
using namespace std;

int main() {
int vetor[10];
int entrada;
cin >> entrada;
vetor[0] = entrada;
cout << "N[0] = " << entrada << endl;

for (int posicaoVetor =1; posicaoVetor <10; posicaoVetor++) {
    vetor[posicaoVetor] = (vetor[posicaoVetor-1]*2);
    cout << "N[" << posicaoVetor << "] = " << vetor[posicaoVetor] << endl;
}

return 0;
}