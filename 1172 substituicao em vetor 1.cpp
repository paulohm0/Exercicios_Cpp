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

