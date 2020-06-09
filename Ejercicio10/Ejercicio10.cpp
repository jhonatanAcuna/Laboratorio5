//
// Created by jacun on 5/06/2020.
//
#include <iostream>
#include "Ejercicio10.h"
using namespace std;
struct Atletas{
    string nombre;
    int edad;
    double altura;
}*deportistas;
int tam;
void Ejercicio10::Datos() {
    tam=20;
    deportistas= new Atletas[tam];
    for(int i=0;i<tam;i++){
        cout << "Nombre: ";
        cin >>deportistas[i].nombre;
        cout << "Edad: ";
        cin >>deportistas[i].edad;
        cout << "Altura: ";
        cin >>deportistas[i].altura;
    }
}
void Ejercicio10::Alturas() {
    cout<< "---Alturas---"<<endl;
    for(int i=0;i<tam;i++){
        cout<<i+1<<" Nombre: "<<deportistas[i].nombre<<"\tAltura: "<<deportistas[i].altura<<endl;
    }
}
void Ejercicio10::Edades(){
    cout<< "---Edades---"<<endl;
    for(int i=0;i<tam;i++){
        cout<<i+1<<" Nombre: "<<deportistas[i].nombre<<"\tEdades: "<<deportistas[i].edad<<endl;
    }
}
void Ejercicio10::Nombres(){
    cout<< "---Nombres---"<<endl;
    for(int i=0;i<tam;i++){
        cout<<i+1<<" Nombre: "<<deportistas[i].nombre<<endl;
    }
}
