#include <iostream>
using namespace std;

void text(int entrada) {
    for (int i=1; i<=10; i++) {
    cout << i << " x " << entrada << " = " << i*entrada << endl;
}
}
int main() {

int entrada;
cout << "Digite o numero no qual vc deseja saber a Tabuada: " << endl;
cin >> entrada;
text(entrada);

    return 0;
}