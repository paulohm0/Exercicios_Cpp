/*
Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, 
deve ser apresentado como resposta o mês do ano por extenso, em inglês, 
com a primeira letra maiúscula.

Entrada
A entrada contém um único valor inteiro.

Saída
Imprima por extenso o nome do mês correspondente ao número existente na 
entrada, com a primeira letra em maiúscula.
https://www.beecrowd.com.br/judge/pt/problems/view/1052
*/
#include <iostream>
using namespace std;

int main () {

    int mes;
    cin >> mes;

    switch (mes) {
        case 1:
        cout << "January" << endl; break;

        case 2:
        cout << "February" << endl; break;

        case 3:
        cout << "March" << endl; break;

        case 4:
        cout << "April" << endl; break;

        case 5:
        cout << "May" << endl; break;

        case 6:
        cout << "June" << endl; break;

        case 7:
        cout << "July" << endl; break;

        case 8:
        cout << "August" << endl; break;

        case 9:
        cout << "September" << endl; break;

        case 10:
        cout << "October" << endl; break;

        case 11:
        cout << "November" << endl; break;

        case 12:
        cout << "December" << endl; break;

        default:
        cout << "Default" << endl; break;

    }

    return 0;
}