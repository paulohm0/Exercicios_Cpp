/*
Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, 
um em cada linha.
https://www.beecrowd.com.br/judge/pt/problems/view/1059
*/
#include <iostream>
using namespace std;
 
int main() {
 
    for(int a=1; a <=100; a++ ) {
        if (a % 2 == 0){
        cout << a << endl;
        }  
    }
    return 0;
}