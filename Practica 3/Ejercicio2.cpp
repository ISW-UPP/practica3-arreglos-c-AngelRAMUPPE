#include <iostream>
using namespace std;
int main()
{
    //EJ2
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        cout << "Ingresa un numero: ";
        cin >> numeros[i];
    }
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += numeros[i];
    }
    double media = sum / 10.0;
    cout << "Los numeros mayor que " << media << " son: " << endl;
    for (int i = 0; i < 10; ++i) {
        if (numeros[i] > media) {
            cout << numeros[i] << " ";
        }
    }
}    
