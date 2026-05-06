/*
Sistema de Transporte Público
Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.
*/
#include <iostream>
using namespace std;
int main(){
    float distancia;
    int opcion;
    double precio;
    cout << "Calculadora de tarifas de transporte" << endl;
    cout << "------------------------------------" << endl;
    cout << "Selecciona un tipo de transporte" << endl;
    cout << "[1]: Bus ($0.10 / km)" << endl;
    cout << "[2]: Metro ($ 0.30 / km)" << endl;
    cout << "[3]: Taxi ($0.50 / km)" << endl;
    cout << "Ingresa una opcion:";
    cin >> opcion;
    switch(opcion){
        case 1:
        cout << "Elegiste: [Bus]" << endl;
        cout << "Costo: ($0.10 / km)" << endl;
        cout << "Ingresa la distancia del trayecto que deseas viajar en km: ";
        cin >> distancia;
        if (distancia > 0){
            precio = (0.10*distancia);
            cout << "Precio por " << distancia << " Km: " << endl;
            cout << "$ " << precio << endl;
            return 0;
        }
        else {
        cout << "ingresa una distancia valida y vuelve a intentarlo" << endl;
        return 1;
        }
        break;
        case 2:
        cout << "Elegiste: [Metro]" << endl;
        cout << "Costo: ($0.30 / km)" << endl;
        cout << "Ingresa la distancia del trayecto que deseas viajar en km: ";
        cin >> distancia;
        if (distancia > 0){
            precio = (0.30*distancia);
            cout << "Precio por " << distancia << " Km: " << endl;
            cout << "$ " << precio << endl;
            return 0;
        }
        else {
        cout << "ingresa una distancia valida y vuelve a intentarlo" << endl;
        return 1;
        }
        break;
        case 3:
        cout << "Elegiste: [Taxi]" << endl;
        cout << "Costo: ($0.50 / km)" << endl;
        cout << "Ingresa la distancia del trayecto que deseas viajar en km: ";
        cin >> distancia;
        if (distancia > 0){
            precio = (0.50*distancia);
            cout << "Precio por " << distancia << " Km: " << endl;
            cout << "$ " << precio << endl;
            return 0;
        }
        else {
        cout << "ingresa una distancia valida y vuelve a intentarlo" << endl;
        return 1;
        }
        break;
        default:
        cout << "ingresa una opcion valida" << endl;
        return 1; 
        }
    return 0;
    }