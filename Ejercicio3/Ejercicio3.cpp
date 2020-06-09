//
// Created by jacun on 4/06/2020.
//
#include <iostream>
#include "Ejercicio3.h"

using namespace std;
struct Persona {
    string nombre;
    int diaN, mesN, anoN;
} *gente;

void Ejercicio3::RecoleccionData() {
    gente = new Persona[8];
    for (int i = 0; i < 8; i++) {
        cout << "Nombre: ";
        cin >> gente[i].nombre;
        cout << "Dia de Nacimiento: ";
        cin >> gente[i].diaN;
        cout << "Mes de Nacimiento: ";
        cin >> gente[i].mesN;
        cout << "Año de Nacimiento: ";
        cin >> gente[i].anoN;

    }

}

void Ejercicio3::MostrasDatoMes() {
    int n;
    cout << "Número de mes a consultar: ";
    cin >> n;
    while (n != 0) {
        for (int i = 0; i < 8; i++) {
            if (n == gente[i].mesN) {
                cout << "Nombre: " << gente[i].nombre << "\tFecha de Nacimiento: " << gente[i].diaN << "/"
                     << gente[i].mesN << "/" << gente[i].anoN << endl;
            }
        }
        cout << "Número de mes a consultar: ";
        cin >> n;
    }
}