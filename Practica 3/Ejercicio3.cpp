#include <iostream>
using namespace std;
int main()
{       //EJ3
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        cout << "Ingresa un numero: ";
        cin >> numeros[i];
    }
    int numGrande = numeros[0];
    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > numGrande) {
            numGrande = numeros[i];
        }
    }
}    
