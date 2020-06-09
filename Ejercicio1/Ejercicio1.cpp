//
// Created by jacun on 5/06/2020.
//
#include <iostream>
#include <cstring>
#include "Ejercicio1.h"

using namespace std;
struct tipoDatos {
    string nombreFich;
    long tamano;
} *fichas = new tipoDatos[100];
int numeroFichas = 0;
string textoTemporal;
int numeroTemporal;

void Ejercicio1::AnadirDatos() {
    char nuevo[20];
    if (numeroFichas < 100) {//verificacion que sean menor a 100
        cin.getline(nuevo, 20);//nuevo dato
        while (strcmp(nuevo, "") == 0) {//Ejercicio 5: restriccion de no vacios
            cout << "Introduce el nombre: ";
            cin.getline(nuevo, 20, '\n');
        }
        fichas[numeroFichas].nombreFich = nuevo;//asignacion de nombre

        cout << "Introduce el tamaño en KB: ";
        cin >> fichas[numeroFichas].tamano;
        while (fichas[numeroFichas].tamano < 0 || fichas[numeroFichas].tamano == 0) {//Ejercicio5: asignacion no negativos o 0
            cout << "ERROR!!!!!!!!\nIntroduce el tamaño en KB: ";//alerta
            cin >> fichas[numeroFichas].tamano;//solicitamos nuevo ingreso
        }

        numeroFichas++;//incrementamos contador
    } else {
        cout << "Máximo de fichas alcanzado (1000)!" << endl;
    }
}

void Ejercicio1::MostrarDatos() {//mostramos total de datos
    for (int i = 0; i < numeroFichas; i++) {
        cout << "Nombre: " << fichas[i].nombreFich
             << "; Tamaño: " << fichas[i].tamano
             << "Kb" << endl;
    }
}

void Ejercicio1::MostrarDatosTam() {
    cout << "¿A partir de que tamaño quieres que te muestre? ";
    cin >> numeroTemporal;//tamaño de restriccion
    for (int i = 0; i < numeroFichas; i++) {
        if (fichas[i].tamano >= numeroTemporal) {//verificacion si es >=
            cout << "Nombre: " << fichas[i].nombreFich
                 << "; Tamaño: " << fichas[i].tamano
                 << "Kb" << endl;
        }
    }
}

void Ejercicio1::VerDatoFich() {//monstramos dato buscado
    cout << "¿De qué fichero quieres ver todos los datos?";
    cin >> textoTemporal;//lectura de un aux para verificar nombre de fichero
    for (int i = 0; i < numeroFichas; i++)
        if (fichas[i].nombreFich == textoTemporal) {//verificacion
            cout << "Nombre: " << fichas[i].nombreFich
                 << "; Tamaño: " << fichas[i].tamano
                 << "Kb" << endl;
        }
}

void Ejercicio1::BusquedaParcial() { //Ejercicio 6
    int flag = 1;//referencia  para verificar existencia de dato
    char parcial[20];//cadena parcial a buscar
    cout << "Introduzca nombre parcial del fichero: ";
    cin.getline(parcial, 20);
    cin.getline(parcial, 20);//lectura de parcial
    if (parcial[0] != '\0' && parcial[0] != ' ' && parcial[0] != '\t') {//verificacion si esta es vacia
        for (int i = 0; i < numeroFichas; i++) {
            if (fichas[i].nombreFich.find(parcial) != std::string::npos) {//si encontramos
                cout << ">>>Ocurrencia<<<<" << endl;
                cout << "Nombre: " << fichas[i].nombreFich
                     << "; Tamaño: " << fichas[i].tamano
                     << " Kb" << endl;
                flag = 1;//estado de flag actualiza a 1
            } else {
                flag = 0;// no hubo ocurrencia estado de flag=0
            }
        }
        if (flag == 0) {//verificamos estado de flag
            cout << "No hubo ocurrencias" << endl;
        }
    } else {
        cout << "Error! Introduzca un nombre parcial valido";
    }

}

void Ejercicio1::Eliminar() {//Ejercicio7
    int indice;//indice a eliminar
    cout << "Indice a eliminar [1-" << numeroFichas << "]";
    cin >> indice;
    if (indice < numeroFichas) {//verifiacion que sea menor al NumeroFichas
        for (int i = 0; i < numeroFichas; i++) {
            if (indice - 1 == i) {//comparacion con el indice
                for (int j = i; j < numeroFichas; j++) {
                    fichas[j] = fichas[j + 1];// movemos los datos a una posicion anterior
                }
            }
        }
        numeroFichas--;//descontamos
    } else {
        cout << "No se Pudo realizar la operacion" << endl;
    }

}

void Ejercicio1::Modificar() {//Ejericio8
    int indice; //INDICE que eliminaremos
    char nuevoN[20], nuevoT[20];//variables auxialiares
    cout << "Indice a modificar desde [1-" << numeroFichas << "]";
    cin >> indice;
    for (int i = 0; i < numeroFichas; i++) {//recorrido por nuestro arreglo
        if (i == indice - 1 && indice - 1 < numeroFichas) {//verificacion
            cout << "Nuevo nombre: ";
            cin.getline(nuevoN, 20);
            cin.getline(nuevoN, 20);//lectura de valor ingresado, con var aux NuevoN
            if (strcmp(nuevoN, "") == 0) {//verificacion si esta vacio
                cout << "No se modifica Nombre" << endl;//alerta
            } else {
                fichas[i].nombreFich = nuevoN;//asignamos nuevo nombre
            }
            cout << "Nuevo tamaño: ";
            cin.getline(nuevoT, 20, '\n');//lectura nuevoT lectura en tipo char
            if (strcmp(nuevoN, "") == 0) {//verificacion si es vacio
                cout << "No se modifica Tamañano" << endl;
            } else if (isdigit(nuevoT[0]) == 0) {//verificacion si es un digito
                cout << "No es un digito";
            } else {
                fichas[i].tamano = stoi(nuevoT);//asignacion del nuevo valor casteado
            }
        }
    }
    cin.ignore();
}

void Ejercicio1::Ordenamiento() {//Ejercicio9 tipo burbueja
    tipoDatos temp; // auxilir del tipo tipoDatos
    for (int i = 0; i < numeroFichas; i++) {//recorrido en arreglo
        for (int j = i + 1; j < numeroFichas; j++) {//por posisciones
            if (fichas[j].nombreFich.compare(fichas[i].nombreFich) < 1) {//comparacion de los nombres
                temp = fichas[i];//datos del arreglo que modificaremos
                fichas[i] = fichas[j];//intercambiamos
                fichas[j] = temp;//asignamos dato
            }
        }
    }
}

