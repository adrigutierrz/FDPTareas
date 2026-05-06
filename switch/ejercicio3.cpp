/*Horario de Clases
Pide el día de la semana y muestra el horario de clases para ese día.*/
#include <iostream>
using namespace std;
int main(){
    int dia;
    cout << "Bienvenido a tu organizador" << endl;
    cout << "---------------------------" << endl;
    cout << "Elige un dia de la semana para ver tu horario:" << endl;
    cout << "[1] Lunes " << endl;
    cout << "[2] Martes" << endl;
    cout << "[3] Miercoles " << endl;
    cout << "[4] Jueves " << endl;
    cout << "[5] Viernes " << endl;
    cout << "Escribe el numero que corresponda a tu opcion deseada: ";
    cin >> dia;
    switch(dia) {
        case 1:
        cout << "HORARIO DE EL LUNES" << endl;
        cout << "-------------------" << endl;
        cout << "Materia       /    Hora" << endl;
        cout << "Elementos para el estudio de la ciencia (9 AM - 11 AM)" << endl;
        cout << "Fundamentos de programacion (11 AM - 1PM)" << endl;
        break;
        case 2:
        cout << "HORARIO DE EL MARTES" << endl;
        cout << "-------------------" << endl;
        cout << "Materia       /    Hora" << endl;
        cout << "Precalculo (9 AM - 11 AM)" << endl;
        cout << "Matematica discreta I (11 AM - 1PM)" << endl;
        break;
        case 3:
        cout << "HORARIO DE EL MIERCOLES" << endl;
        cout << "-------------------" << endl;
        cout << "Materia       /    Hora" << endl;
        cout << "Elementos para el estudio de la ciencia (9 AM - 11 AM)" << endl;
        cout << "Fundamentos de programacion (11 AM - 1PM)" << endl;
        break;
        case 4:
        cout << "HORARIO DE EL JUEVES" << endl;
        cout << "-------------------" << endl;
        cout << "Materia       /    Hora" << endl;
        cout << "Precalculo (9 AM - 11 AM)" << endl;
        cout << "Matematica discreta I (11 AM - 1PM)" << endl;
        break;
        case 5:
        cout << "HORARIO DE EL VIERNES" << endl;
        cout << "-------------------" << endl;
        cout << "Materia       /    Hora" << endl;
        cout << "Discucion Matematica Discreta I (8 AM - 9 AM)" << endl;
        cout << "Discusion Precalculo (10 AM - 11 AM)" << endl;
        break;
        default:
        cout << "Ingresa un numero valido y vuelve a intentarlo" << endl;
        return 1;
    }
    return 0;
}