#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Vars
    float peso;
    int costo;
    cout << "Calculador de tarifa de envio" << endl;
    cout << "-----------------------------" << endl;
    cout << "Ingresa el peso del producto en kg" << endl;
    cin >> peso;
    if (peso <= 0)
    {
        cout << "Ingresa un peso valido" << endl;
        return 0;
    }
    else
    {
        if (peso <= 5)
        {
            costo = 5;
        }
        else
        {
            if (peso <= 6)
            {
                costo = 10;
            }
            else
            {
                costo = 15;
            }
        }
        cout << "El costo de envio es de: " << costo << endl;
    }
    return 0;
}