/*
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido.
https://www.beecrowd.com.br/judge/pt/problems/view/1078
*/

#include <iostream>
using namespace std;

void text(int entrada) {
    for (int i=1; i<=10; i++) {
    cout << i << " x " << entrada << " = " << i*entrada << endl;
}
}
int main() {

int entrada;
cout << "Digite o numero no qual vc deseja saber a Tabuada: " << endl;
cin >> entrada;
text(entrada);

    return 0;
}