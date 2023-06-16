/*
Leia 3 valores inteiros e ordene-os em ordem crescente. 
No final, mostre os valores em ordem crescente, uma linha 
em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
https://www.beecrowd.com.br/judge/pt/problems/view/1042
*/
#include <iostream>
using namespace std;

int main () {

int valores[3];
int copiaentrada[3];
int entrada, aux, a, b, c;

for (int i=0; i<3; i++) {
    cin >> entrada;
    valores[i] = entrada;
    a = valores[0];
    b = valores[1];
    c = valores[2];
}


for (int i=0; i<3; i++){
    for (int x=i+1; x<3; x++){
         if (valores[i] > valores[x]) {
            aux = valores[i];
            valores[i] = valores[x];
            valores[x] = aux;
         }
    }
}
int i;
for (i=0; i<3; i++){
     cout << valores[i] << endl;
}
cout << endl;

cout << a << endl;
cout << b << endl;
cout << c << endl;

    return 0;
}