#include <iostream>
#include <iomanip>
using namespace std;

void fixo() {
   cout << fixed << setprecision(1);
}

int main() {

double a, b, c;
cin >> a >> b >> c;

if (b + c > a && a + c > b && a + b > c) {
    fixo();
    cout << "Perimetro = " << a + b + c << endl;  
} else {
    fixo();
    cout << "Area = " << ((a + b) * c) / 2 << endl; 
}

    return 0;
}
