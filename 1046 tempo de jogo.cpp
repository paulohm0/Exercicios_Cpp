#include <iostream>
using namespace std;

int gametime (int x, int y) {
    int tempo;
    if (y <= x) y += 24;
    tempo = y - x;
    return tempo;
}
int main() {

int starttime, finishtime;
cin >> starttime >> finishtime;

cout << "O JOGO DUROU " << gametime(starttime, finishtime) << " HORA(S)" << endl;

    return 0;
}
