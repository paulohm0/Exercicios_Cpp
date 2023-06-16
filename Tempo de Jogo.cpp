/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a 
duração do jogo, sabendo que o mesmo pode começar em um dia e terminar 
em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de 
início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.
https://www.beecrowd.com.br/judge/pt/problems/view/1046
*/
#include <iostream>
using namespace std;

int gametime (int x, int y) {
    int tempo;
    if (y <= x) y += 24;
    tempo = y - x;
    return tempo;
}
int main() {

int starttime, finishtime;
cin >> starttime >> finishtime;

cout << "O JOGO DUROU " << gametime(starttime, finishtime) << " HORA(S)" << endl;

    return 0;
}
