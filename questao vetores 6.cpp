#include <iostream>
using namespace std;

/*
Utilizando vetores, crie um programa que organize
uma quantidade qualquer de números inteiros fornecidos
pelo usuário da seguinte forma: primeiro os números
pares em ordem crescente e depois os números ímpares
em ordem decrescente. 
*/

int main() {

int vetor[10]; 
int entrada;
int i, j, aux;

cout << "digite a entrada:" << endl;
for (i=0; i<10; i++) {
    cin >> entrada;
    vetor[i] = entrada;
}
cout << endl;

cout << "Ordem Crescente:" << endl;
for (i=0; i<10; i++) {
    for (j=i+1; j<10; j++) {
        if (vetor[i] > vetor[j]) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
}
for (j=0; j<10; j++)
if (vetor[j]%2 == 0)
cout << vetor[j] << endl;
cout << endl;

cout << "Ordem Decrescente:" << endl;
for (i=0; i<10; i++) {
    for (j=i+1; j<10; j++) {
        if (vetor[j] > vetor[i]) {
            aux = vetor[j];
            vetor[j] = vetor[i];
            vetor[i] = aux;
        }
    }
}
for (j=0; j<10; j++)
if (vetor[j]%2 != 0)
cout << vetor[j] << endl;
cout << endl;

    return 0;
}