#include <iostream>
using namespace std;

int main() {

int A, B, C;
cin >> A >> B >> C;

int maiorAB = (A + B + abs(A - B)) / 2;
int maiorABC = (maiorAB + C + abs(maiorAB - C)) / 2;

cout << maiorABC << " eh o maior" << endl;

return 0;

}






