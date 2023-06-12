#include <iostream>
using namespace std;

/*
Faça um programa que lê 10 números inteiros 
do teclado e armazene em um vetor. Ao final
imprima o vetor armazenado nos dois sentidos.
*/

int main () {

int vetor[10];
int entrada;
int i;

for (i=0; i<10; i++) {
    cin >> entrada;
    vetor[i] = entrada;
}
for (i=0; i<10; i++) {
cout << "local [" << i << "] = " << vetor[i] << endl;
}
for (i=9; i<10; i--) {
    if (i>=0) {
    cout << "local [" << i << "] = " << vetor[i] << endl;
    }
}
    return 0;
}