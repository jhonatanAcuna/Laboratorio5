//
// Created by jacun on 4/06/2020.
//
#include <iostream>
#include "Ejercicio2.h"
using namespace std;
struct Persona{
    std::string nombre;
    std::string apellido;
    int edad;
}p1;
void Ejercicio2::Datos() {
    cout << "Nombre: ";
    cin >>p1.nombre;
    cout << "Apellidos: ";
    cin >> p1.apellido;
    cout << "Edad: ";
    cin >> p1.edad;
}
void Ejercicio2::MostrarDatos() {
cout << "Hola "<<" "<<p1.nombre<<" ,"<<p1.apellido<<" "<<"\tEdad: "<<p1.edad;
}