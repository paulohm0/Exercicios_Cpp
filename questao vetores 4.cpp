#include <iostream>
using namespace std;

/*
Ler um vetor com 10 nomes de pessoas, após
pedir que o usuário digite um nome qualquer de
pessoa. Escrever a mensagem “ACHEI”, se o nome
estiver armazenado no vetor C ou “NÃO ACHEI”
caso contrário.
*/

int main () {

char nomes[10] = {'A','B','C','D','E','F','G','H','I','J'};
char entrada;
int i;

cout << "Digite o seu nome:" << endl;
cin >> entrada;
bool hasFind;

for (i=0; i<10; i++) {
     hasFind = entrada == nomes[i];
     if (hasFind) {
     break;
     }
}
if (hasFind) {
cout << "ACHEI" << endl;
} else {
cout << "NAO ACHEI" << endl;    
}

return 0;
}