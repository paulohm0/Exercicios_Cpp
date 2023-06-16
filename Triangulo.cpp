/*
Leia 3 valores reais (A, B e C) e verifique se eles formam 
ou não um triângulo. Em caso positivo, calcule o perímetro 
do triângulo e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B 
como base e C como altura, mostrando a mensagem

Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
https://www.beecrowd.com.br/judge/pt/problems/view/1043
*/
#include <iostream>
#include <iomanip>
using namespace std;

void fixo() {
   cout << fixed << setprecision(1);
}

int main() {

double a, b, c;
cin >> a >> b >> c;

if (b + c > a && a + c > b && a + b > c) {
    fixo();
    cout << "Perimetro = " << a + b + c << endl;  
} else {
    fixo();
    cout << "Area = " << ((a + b) * c) / 2 << endl; 
}

    return 0;
}
