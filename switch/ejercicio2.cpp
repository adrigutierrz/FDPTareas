/*Asignación de Grupos en una Universidad
Pide la inicial del apellido de un estudiante y usa switch para asignarlo a un grupo (A-M = Grupo 1, N-Z = Grupo 2).*/
#include <iostream>
using namespace std;
int main(){
    char apellido;
    int grupo;
    cout << "Inscripcion a grupos" << endl;
    cout << "Ingresa la primera letra de tu primer apellido: ";
    cin >> apellido;
    switch (apellido)
    {
    case 'A':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'B':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'C':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'D':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'E':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'F':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'G':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'H':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'I':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'J':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'K':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'L':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'M':
        grupo = 1;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'N':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'O':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'P':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'Q':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'R':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'S':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'T':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'U':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'V':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'W':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'X':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'Y':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    case 'Z':
        grupo = 2;
        cout << "Perteneces al grupo: " << grupo << endl;
        break;
    default:
        cout << "Ingresa un Caracter valido de la A a la Z" << endl;
        return 1;
        break;
    }
    return 0;
}