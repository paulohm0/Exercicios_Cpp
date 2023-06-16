/*
Leia 2 valores inteiros (A e B). Após, o programa deve 
mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", 
indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.
https://www.beecrowd.com.br/judge/pt/problems/view/1044
*/
#include <iostream>
using namespace std;

int main() {

int a, b;
cin >> a >> b;

if (a%b ==0 || b%a ==0) {
    cout << "Sao Multiplos" << endl;
} else {
    cout << "Nao sao Multiplos" << endl;
}

    return 0;
}