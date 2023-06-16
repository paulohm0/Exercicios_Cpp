/*
Neste problema, deve-se ler o código de uma peça 1, o 
número de peças 1, o valor unitário de cada peça 1, o 
código de uma peça 2, o número de peças 2 e o valor 
unitário de cada peça 2. Após, calcule e 
mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada 
linha haverá 3 valores, respectivamente dois inteiros e 
um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo 
fornecido abaixo, lembrando de deixar um espaço após os 
dois pontos e um espaço após o "R$". O valor deverá ser 
apresentado com 2 casas após o ponto.
https://www.beecrowd.com.br/judge/pt/problems/view/1010
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int CODIGOPECA1, NUMEROPECA1;
double VALORUNIDPECA1;
cin >> CODIGOPECA1 >> NUMEROPECA1 >> VALORUNIDPECA1;

int CODIGOPECA2, NUMEROPECA2;
double VALORUNIDPECA2;
cin >> CODIGOPECA2 >> NUMEROPECA2 >> VALORUNIDPECA2;

double TOTAL1 = NUMEROPECA1*VALORUNIDPECA1;
double TOTAL2 = NUMEROPECA2*VALORUNIDPECA2;
double TOTAL = TOTAL1 + TOTAL2;

cout << fixed << setprecision(2);
cout << "VALOR A PAGAR: R$ " << TOTAL << endl;

return 0;

}