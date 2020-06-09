#include <iostream>
#include "Ejercicio10.h"
using namespace std;
int main() {
    Ejercicio10::Datos();
    int opcion;
    cout <<"[1]: Nombre de Jugadores\t[2]: Alturas\t[3]: Edades\t[4]: Salir"<<endl;
    cin >> opcion;
    while (opcion!=4){
        if(opcion==1){
            Ejercicio10::Nombres();
        }else if(opcion==2){
            Ejercicio10::Alturas();
        }else if(opcion==3){
            Ejercicio10::Edades();
        }
        cout <<"[1]: Nombre de Jugadores\t[2]: Alturas\t[3]: Edades\t[4]: Salir"<<endl;
        cin >> opcion;
    }

    return 0;
}
