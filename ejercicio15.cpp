#include <iostream>
using namespace std;

int main(){
    string password, username, savedpassword;
    int intentos = 3;
    cout << "Servicio de autenticación" << endl;
    cout << "-------------------------" << endl;
    cout << "Crea tu usuario: " << endl;    
    cin >> username;
    cout << "Crea tu contraseña: " << endl;
    cin >> password;
    cout << "-------------------------" << endl;
    cout << "   Inicio de sesión      " << endl;
    cout << "-------------------------" << endl;
    cout << "Bienvenido, "<< username << endl;
    cout << "Ingresa tu contraseña: " << endl;
    cin >> savedpassword;
    if (savedpassword == password && intentos > 0){
        cout << "Contraseña correcta, Bienvenido!" << endl;
    }
    else{
        if (intentos == 2 )
        intentos --;
        cout << "Contraseña incorrecta" << endl;
        cout << "Te quedan " << intentos << " intentos restantes" << endl;
    }
return 0;
// No es posible sin bucles 
}