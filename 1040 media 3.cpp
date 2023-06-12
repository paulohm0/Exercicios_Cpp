#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

double nota1, nota2, nota3, nota4;
cin >> nota1 >> nota2 >> nota3 >> nota4;
double media;
media = ((nota1*2)+(nota2*3)+(nota3*4)+(nota4)) / 10;
cout << fixed << setprecision(1);
cout << "Media: " << media << endl;

if (media>=7.0) {
   cout << "Aluno aprovado." << endl;
} else if (media<5.0) {
   cout << "Aluno reprovado." << endl; 
} else if (media>=5.0 || media<6.9) {
   cout << "Aluno em exame." << endl;
double notadoexame;
cin >> notadoexame;
   cout << "Nota do exame: " << notadoexame << endl;

if (notadoexame>=5.0) {
   cout << "Aluno aprovado." << endl; 
}
double mediafinal;
mediafinal = (notadoexame+media) / 2;
cout << "Media final: " << mediafinal << endl; 
}

return 0;
}