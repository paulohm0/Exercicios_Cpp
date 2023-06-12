#include <iostream>
#include <math.h>
using namespace std;

int main() {

double a, b, c;
cin >> a >> b >> c;
int aux;

if (a < b) {
    aux = a;
    a = b;
    b = aux;
}
if (a < c) {
    aux = a;
    a = c;
    c = aux;
}
if (b < c) {
    aux = b;
    b = c;
    c = aux;
}
if (a >= b + c) {
    cout << "NAO FORMA TRIANGULO" << endl;
} 
else {
if (pow(a,2) == pow(b,2) + pow(c,2)) {
    cout << "TRIANGULO RETANGULO" << endl;
}
if (pow(a,2) > pow(b,2) + pow(c,2)) {
    cout << "TRIANGULO OBTUSANGULO" << endl;
}
if (pow(a,2) < pow(b,2) + pow(c,2)) {
    cout << "TRIANGULO ACUTANGULO" << endl;
}
if (a == b && a == c && b == c) {
    cout << "TRIANGULO EQUILATERO" << endl;
} else if (a == b || a == c || b == c) {
    cout << "TRIANGULO ISOSCELES" << endl;
}
}

    return 0;
}