#include <iostream>
using namespace std;
int main()
{         //EJ1
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa un numero: ";
        cin >> numeros[i];
    }
    system("cls");
    cout << "Los numeros alrevez son: ";
    for (int i = 9; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
}    
