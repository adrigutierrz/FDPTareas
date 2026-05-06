/*Sistema de Puntuación de Videojuegos
Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño*/
#include <iostream>
using namespace std;
int main()
{
    int stars;
    cout << "Medidor de desempeño" << endl;
    cout << "--------------------" << endl;
    cout << "Ingresa tu puntaje en estrellas:" << endl;
    cin >> stars;
    switch (stars)
    {
    case 1:
        cout << "Muy mal" << endl;
        break;
    case 2:
        cout << "Mal" << endl;
        break;
    case 3:
        cout << "Podrias hacerlo mejor..." << endl;
        break;
    case 4:
        cout << "Muy bien!" << endl;
        break;
    case 5:
        cout << "Puntuación perfecta" << endl;
        break;
    default:
        cout << "Ingresa una cantidad de estrellas correcta (1 a 5)" << endl;
        return 1;
    }
    return 0;
}