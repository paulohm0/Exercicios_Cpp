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