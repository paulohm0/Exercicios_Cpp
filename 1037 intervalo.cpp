#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double a;
cin >> a;

if (a<0.00 || a>100.00) {
    cout << "Fora de intervalo" << endl;
} else 

if (a>=0.00 && a<=25.00) {
    cout << "Intervalo (0,25)" << endl;
} else

if (a>25.00 && a<=50.00) {
    cout << "Intervalo (25,50)" << endl;
} else

if (a>50.00 && a<=75.00) {
    cout << "Intervalo (50,75)" << endl;
} else

if (a>75.00 && a<=100.00) {
    cout << "Intervalo (75,100)" << endl;
} 

return 0;
}