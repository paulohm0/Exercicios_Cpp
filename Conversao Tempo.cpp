/*
Leia um valor inteiro, que é o tempo de duração em segundos 
de um determinado evento em uma fábrica, e informe-o expresso 
no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), 
convertido para horas:minutos:segundos, conforme exemplo fornecido.
https://www.beecrowd.com.br/judge/pt/problems/view/1019
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int N, Horas=0, Minutos=0, Segundos=0;
cin >> N;
Horas = N/3600;
Minutos = (N%3600) / 60;
Segundos = (N%3600) %60;

cout << Horas << ":" << Minutos << ":" << Segundos << endl;

return 0;

}