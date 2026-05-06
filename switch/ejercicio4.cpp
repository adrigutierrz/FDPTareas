/*Conversión de Unidades de Longitud
Pide una opción (1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas) y realiza la conversion.*/
#include <iostream>
using namespace std;
int main(){
    int option;
    float entrada;
    float resultado;
    cout << "Bienvenido al conversor de unidades" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Elige una opcion:" << endl;
    cout << "[1] cm a pulgadas " << endl;
    cout << "[2] metros a pies" << endl;
    cout << "[3] km a millas " << endl;
    cout << "Escribe el numero que corresponda a tu opcion deseada: ";
    cin >> option;
    switch(option) {
        case 1:
        cout << "cm a pulgadas" << endl;
        cout << "-------------------" << endl;
        cout << "Ingresa la cantidad en cm: ";
        cin >> entrada;
        if (entrada > 0){
        resultado = (entrada/2.54);
        }
        else {
        cout << "Ingresa un numero valido y vuelve a intentarlo" << endl;
        return 1;
        }
        cout << entrada << " cm" << " equivalen a: " << resultado << " pulgadas" << endl;
        return 0;
        break;
        //division//
        case 2:
        cout << "metros a pies" << endl;
        cout << "-------------------" << endl;
        cout << "Ingresa la cantidad en metros: ";
        cin >> entrada;
        if (entrada > 0){
        resultado = (entrada*3.281);
        }
        else {
        cout << "Ingresa un numero valido y vuelve a intentarlo" << endl;
        return 1;
        }
        cout << entrada << " metros" << " equivalen a: " << resultado << " pies" << endl;
        return 0;
        break;
        case 3:
        cout << "km a millas" << endl;
        cout << "-------------------" << endl;
        cout << "Ingresa la cantidad en km: ";
        cin >> entrada;
        if (entrada > 0){
        resultado = (entrada/1.609);
        }
        else {
        cout << "Ingresa un numero valido y vuelve a intentarlo" << endl;
        return 1;
        }
        cout << entrada << " km" << " equivalen a: " << resultado << " millas" << endl;
        return 0;
        break;
        default:
        cout << "Ingresa un numero valido y vuelve a intentarlo" << endl;
        return 1;
    }
    return 0;
}