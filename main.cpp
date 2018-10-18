#include <iostream>
#include "funciones.h"
#include <conio.h>
#include <string>
#include <vector>
using namespace std;

int main() {

    int n,contador=0;
    string r1[9][3]={{"A palabras necias", "oidos sordos","uno"} ,
                      {"Ojos que no ven", "corazón que no siente","dos"},
                      {"en boca cerrada", "no entran moscas","tres"},
                      {"no hay mal que por bien","no venga","cuatro"},
                      {"no dejes para ma;ana","lo que puedes hacer hoy","cinco"},
                      {"perro que ladra,","no muerde","sesie"},
                      {"al que madruga","dios le ayuda","siete"},
                      {"aunque la mona se vista de seda,","mona se queda","ocho"},
                      {"a caballo regalado,","no se le miran los dientes","nuevo"}
    };

    vector<string> significado {"no hay que hacer caso del que habla sin razon","no se sufre por lo que no se sabe","es a veces muy util callar","a veces,algo negativo trae consecuencia positivas","hay que tratar de vivir el dia presente realizando los anhelos o deberes","los que hablan mucho,suelen hacer poci","muchas veces, el exito depende de la rapidez","no importa con que vista una persona, ella siempre sera la misma","sera el tiempo quien diga quien tiene la razon quien se equivoca"};



    cout << "**********************************************"<<'\n'<<'\n';
    cout << "*                                            *"<<'\n'<<'\n';
    cout << "* Bienvenidos al juego de refranes:          *"<<'\n'<<'\n';
    cout << "*                                            *"<<'\n'<<'\n';
    cout << "**********************************************"<<'\n'<<'\n';

    do{
        MenuJuego(n,r1,contador);
    }while (n!=3);

    return 0;
}
