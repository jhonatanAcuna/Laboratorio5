#include "Ejercicio1.h"
#include <iostream>

using namespace std;

int main() {
    int opcion;
    do {
        // Menu principal
        cout << endl;
        cout << "Escoja una opción:" << endl;
        cout << "1.- Añadir datos de un nuevo fichero" << endl;
        cout << "2.- Mostrar los nombres de todos los ficheros" << endl;
        cout << "3.- Mostrar ficheros que sean de mas de un cierto tamaño" << endl;
        cout << "4.- Ver datos de un fichero" << endl;
        cout << "6.- Buscar por fragmento de palabra" << endl;
        cout << "7.- Eliminar" << endl;
        cout << "8.- Modificar" << endl;
        cout << "9.- Ordenar" << endl;
        cout << "5.- Salir" << endl;

        cin >> opcion;

        // Hacemos una cosa u otra segÃºn la opciÃ³n escogida
        switch (opcion) {
            case 1: // Añadir un dato nuevo
                Ejercicio1::AnadirDatos();
                break;
            case 2: // Mostrar todos
                Ejercicio1::MostrarDatos();
                break;
            case 3: // Mostrar segÃºn el tamaÃ±o
                Ejercicio1::MostrarDatosTam();
                break;

            case 4: // Ver todos los datos (pocos) de un fichero
                Ejercicio1::VerDatoFich();
                break;
            case 5: // Salir: avisamos de que salimos
                cout << "Fin del programa" << endl;
                break;
            case 6: //Busqueda por fragmento
                Ejercicio1::BusquedaParcial();
                break;
            case 7: //Eliminar Fichero
                Ejercicio1::Eliminar();
                break;
            case 8: //modificar Fichero
                Ejercicio1::Modificar();
                break;
            case 9://ordenar Ficheros alfabeticamente
                Ejercicio1::Ordenamiento();
                break;
            default: // Otra opcion: no vÃ¡lida
                cout << "Opción desconocida!" << endl;
                break;
        }
    } while (opcion != 5);  // Si la opcion es 5, terminamos
    return 0;
}
