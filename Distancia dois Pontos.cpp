/*
Leia os quatro valores correspondentes aos eixos x e y de 
dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e 
calcule a distância entre eles, mostrando 4 casas decimais 
após a vírgula, segundo a fórmula:

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira 
linha contém dois valores de ponto flutuante: x1 y1 e a 
segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula 
fornecida, com 4 casas após o ponto decimal.
https://www.beecrowd.com.br/judge/pt/problems/view/1015
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

float X1, Y1, X2, Y2;
cin >> X1 >> Y1;
cin >> X2 >> Y2;


double DISTANCIA = sqrt( pow(X2 - X1,2) + pow(Y2 - Y1,2) );

cout << fixed << setprecision(4);
cout << DISTANCIA << endl;

return 0;

}