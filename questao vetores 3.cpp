#include <iostream>
using namespace std;

/*
Ler um vetor de 10 elementos inteiros e positivos.
Criar um segundo vetor da seguinte forma: os
elementos de índice par receberão os respectivos elementos
divididos por 2; os elementos de índice
ímpar receberão os respectivos elementos multiplicados 
por 3. Imprima os dois vetores. 
*/

int main () {

int vetorA[10];
int vetorB[10];
int entrada, i, j;

for (i=0; i<10; i++) {
    cin >> entrada;
    vetorA[i] = entrada;
}
for (j=0; j<10; j++) {
    if (j%2==0) {
       vetorB[j] = vetorA[i] / 2;
    } else {
       vetorB[j] = vetorA[i] * 3;
    }
}
for (i=0; i<10; i++) {
    cout << "vetorA[" << i << "] = " << vetorA[i] << endl;
}
    
for (j=0; j<10; j++) {
    cout << "vetorB[" << j << "] = " << vetorB[j] << endl;
}

    return 0;
}
