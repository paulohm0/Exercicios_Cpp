#include <iostream>
using namespace std;

/*
Faça um programa que leia e monte dois vetores de 
números inteiros com 20 números cada. Depois
de montados gere um terceiro vetor formado pela
diferença dos dois vetores lidos, um quarto vetor
formado pela soma dos dois vetores lidos e por
último um quinto vetor formado pela multiplicação
dos dois vetores lidos.
*/


int main() {

int vetorA[20];
int vetorB[20];
int vetorC[20];
int vetorD[20];
int vetorE[20];
int a, b, c, d, e;
int entradaA, entradaB;

cout << "Digite as entradas: " << endl;
cin >> entradaA >> entradaB;
cout << endl;

cout << "os valores de VetorA sao: " << endl;
for (a=0; a<20; a++){
    vetorA[a] = entradaA + a;
    cout << "Vetor A[" << a << "] = " << vetorA[a] << endl;

}
cout << endl;

cout << "os valores de VetorB sao: " << endl;
for (b=0; b<20; b++){
    vetorB[b] = entradaB + b;
    cout << "Vetor B[" << b << "] = " << vetorB[b] << endl;
}
cout << endl;

cout << "os valores de VetorC sao: " << endl;
for (c=0; c<20; c++){
    vetorC[c] = vetorA[c] - vetorB[c];
    cout << "Vetor C[" << c << "] = " << vetorC[c] << endl;
}
cout << endl;

cout << "os valores de VetorD sao: " << endl;
for (d=0; d<20; d++){
    vetorD[d] = vetorA[d] + vetorB[d];
    cout << "Vetor D[" << d << "] = " << vetorD[d] << endl;
}
cout << endl;

cout << "os valores de VetorE sao: " << endl;
for (e=0; e<20; e++){
    vetorE[e] = vetorA[e] * vetorB[e];
    cout << "Vetor E[" << e << "] = " << vetorE[e] << endl;
}
cout << endl;

return 0;
}
