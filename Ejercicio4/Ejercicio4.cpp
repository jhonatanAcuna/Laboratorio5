//
// Created by jacun on 4/06/2020.
//

#include "Ejercicio4.h"
#include <iostream>
#include <cstring>

using namespace std;
struct Personas {
    string direccion;
    char nombre[20];
    int telefono, edad;
} *p= new Personas[50];
int n=0;
void Ejercicio4::Datos() {

    while(n<50){
        cout << "Nombre: ";
        cin.getline(p[n].nombre, 20);
        if (strcmp(p[n].nombre, "") == 0) {
            break;
        }
        cout << "Edad: ";
        cin >> p[n].edad;
        cout << "Direccion: ";
        cin >> p[n].direccion;
        cout << "Telefono: ";
        cin >> p[n].telefono;
        cin.ignore();
        n++;
    }
}

void Ejercicio4::MostrarNombres() {
    for (int i = 0; i < n; i++) {//cambiar tamaño
        cout << "Nombre: " << p[i].nombre << endl;
    }
}

void Ejercicio4::MostrarPersonasEdad(int edad) {
    for (int i = 0; i < n; i++) {//cambiar tamaño
        if (p[i].edad == edad) {
            cout << "Nombre: " << p[i].nombre << "\tEdad: " << p[i].edad << endl;
        }
    }

}

void Ejercicio4::PersonasInicial(char letra) {
    cout << "Usuarios con Letra: " << letra << endl;
    for (int i = 0; i < n; i++) {//cambiar tamaño
        string aux = p[i].nombre;
        if (aux[0] == letra) {
            cout << "Nombre: " << p[i].nombre << endl;
        }
    }
}
void Ejercicio4::Menu() {
    int opcion;
    cout << "[1]: Lista de nombres\t[2]: Personas segun edad\t[3]: Personas por Inicial\t[4]: Salir"<<endl;
    cin>>opcion;
    while(opcion !=4){
        if(opcion==1){
            Ejercicio4::MostrarNombres();
        }else if(opcion==2){
            int edad;
            cin >> edad;
            MostrarPersonasEdad(edad);
        }else if(opcion==3){
            char letra;
            cin >>letra;
            PersonasInicial(letra);
        }
        cout << "[1]: Lista de nombres\t[2]: Personas segun edad\t[3]: Personas por Inicial\t[4]: Salir"<<endl;
        cin>>opcion;
    }
}