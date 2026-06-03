#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    //lote 1
    int codigos[8];
    string  nombres[8]={""};
    int opcion;
    //lote 2
    int lotegeneroscargado=0;
    int codigosCont[15] = {0};
    string titulos[15] = {""};
    char tipos[15] = {' '};
    int duraciones[15] = {0};
    float puntajes[15] = {0.0};
    int codGenerosCont[15] = {0};

    do{
    mostrarmenu();
    cin>>opcion;
    if (opcion>=0 && opcion<=5){
    switch(opcion){
    case 1:
        cout << "Seleccionaste la opcion numero 1: ";
        lotegeneroscargado= cargargeneros(codigos, nombres);
    break;
    case 2:
        cout << "Sellecionaste la opcion numero 2" << endl;
        cargarcontenidos(lotegeneroscargado, codigosCont, titulos, tipos, duraciones, puntajes, codGenerosCont, codigos);
    break;
    case 3:
    break;
    case 4:
    break;
    case 5:
    break;
    case 6:
    break;
    }
    } else cout <<"El numero ingresado es incorrecto" << endl;
    } while (opcion!=0);



    return 0;
}
