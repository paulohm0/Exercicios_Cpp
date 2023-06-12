#include <iostream>
using namespace std;

int main()  {

int a;
int sobra;
cin >> a;

cout << a/365 << " ano(s)" << endl;
sobra = a%365;
cout << sobra/30 << " mes(es)" << endl;
sobra = sobra%30;
cout << sobra/1 << " dia(s)" << endl;

return 0;
}