/*
Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0.
*/
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Temporizador - Cuenta regresiva" << endl;
    cout << "Ingresa un numero: ";
    cin >> numero;
    if (numero > 0) {
    do
    {
        numero--;
        cout << numero << endl;
    } while (numero > 0);
    if (numero == 0)
    {
        cout << "FIN!" << endl;
    }
}
else {
    cout <<"Ingresa un numero entero mayor a 0" << endl;
}
    return 0;
};