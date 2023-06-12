#include <iostream>
using namespace std;

int main() {

  int A, B, C, D, E;
  int qtd = 0;

  cin >> A >> B >> C >> D >> E;

  if (A % 2 == 0) {
    qtd++;
  }
  if (B % 2 == 0) {
    qtd++;
  }
  if (C % 2 == 0) {
    qtd++;
  }
  if (D % 2 == 0) {
    qtd++;
  }
  if (E % 2 == 0) {
    qtd++;
  }

  cout << qtd << " valores pares" << endl;

  return 0;
  }
