#include "funciones.h"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;

void MenuJuego(int &n,string r1[10][3], int &contador){
    cout << "\n\nIngrese el numero de opcion que desee utilizar"<<'\n'<<'\n';
    cout << "(1) Jugar a completar..."<<'\n';
    cout << "(2) Mostrar..."<<'\n';
    cout << "(3) Salir"<<'\n'<<'\n';
    cout << "Ingrese el numero: "<<'\n';
    cin >> n;
    switch (n){
        case 1: JugarCompletarRefranes(n,r1,contador);
        break;
        case 2: MostrarResultados(contador);
        break;
    }
}

void JugarCompletarRefranes(int &n,string r1[10][3],int &contador){
    string eleccion;
    string completar;
    bool aprobar;
    srand(time(nullptr));
    int nrefran=rand()%10;

    cout << r1[nrefran][0];

    cout << "\nIngrese 1 si desea jugar, 2 si desea omitir el refrán";
    cin >> eleccion;


    if (eleccion == "1"){
        cout << "\nIngrese su respuesta: ";
        cin.ignore(256, '\n');
        getline(cin, completar);

            if (completar==r1[nrefran][1]){
                cout << r1[nrefran][2] << endl;
                aprobar = true;

            }else{
                aprobar = false;
            }

            if (aprobar){
                cout << "\nExcelente, usted ha ganado un punto";
                contador++;
            }else {
                cout << "\nSigue intentando";
            }
        }else if (eleccion != "2"){
        cout << endl <<"es un error, juegue de nuevo,";
    }



}

//string obtenerRespuesta(){
//    string s;
//    cin >> s;
//    return s;
//}
//void mostrarSignificado(int n){
//    cout << significados[n] << endl;
//}


void MostrarResultados(int contador){
    cout << "\nTu puntaje es: " << contador;
}
