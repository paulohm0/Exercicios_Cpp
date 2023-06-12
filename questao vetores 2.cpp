#include <iostream>
using namespace std;

/*
Ler um vetor de 10 elementos. Crie um segundo 
vetor, com todos os elementos na ordem inversa,
ou seja, o último elemento passará a ser o primeiro,
o penúltimo será o segundo e assim por diante.
Imprima os dois vetores.
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
    vetorB[j] = vetorA[9-j];
}
for (i=0; i<10; i++) {
     cout << "vetorA[" << i << "] = " << vetorA[i] << endl;
}
for (j=0; j<10; j++) {
     cout << "vetorB[" << j << "] = " << vetorB[j] << endl;
}

    return 0;
}