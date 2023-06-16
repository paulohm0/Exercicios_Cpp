/*
Escreva um programa que leia três valores com ponto flutuante 
de dupla precisão: A, B e C. Em seguida, calcule e mostre:

a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada
O arquivo de entrada contém três valores com um dígito após o 
ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha 
corresponde a uma das áreas descritas acima, sempre com mensagem 
correspondente e um espaço entre os dois pontos e o valor. 
O valor calculado deve ser apresentado com 3 dígitos após 
o ponto decimal.
https://www.beecrowd.com.br/judge/pt/problems/view/1012
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double A, B, C;
cin >> A >> B >> C;

double AreaTriangulo = (A*C) / 2;
double AreaCirculo = 3.14159 * (C*C);
double AreaTrapezio = ((A+B)*C) / 2;
double AreaQuadrado = B * B;
double AreaRetangulo = A * B;

cout << fixed << setprecision(3);
cout << "TRIANGULO: " << AreaTriangulo << endl;
cout << "CIRCULO: " << AreaCirculo << endl;
cout << "TRAPEZIO: " << AreaTrapezio << endl;
cout << "QUADRADO: " << AreaQuadrado << endl;
cout << "RETANGULO: " << AreaRetangulo << endl;

return 0;

}