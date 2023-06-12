#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double A[100];
double entrada;

for (int i=0; i<100; i++) {
     cin >> entrada;
     A[i] = entrada;
     cout << fixed << setprecision(1); 
     if (entrada <=10) {  
     cout << "A[" << i << "] = " << A[i] << endl; }
}
    return 0;
}