/*
Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.
*/
#include <iostream>
using namespace std;
int main()
{
    int input;
    int resultado = 0;
    do{
        cout << "Ingresa un numero entero: ";
        cin >> input;
        if (resultado)
        resultado = (resultado + input);
        cout << "Ingresaste: " << input << endl;
        else {
        cout << "Ingresa un numero entero y vuelve a intentarlo" << endl;
        return 1;
        }
    }
    while(input != 0);
    cout << "Suma total: " << resultado << endl;
};