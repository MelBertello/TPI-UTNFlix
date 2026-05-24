#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int codigos[8];
    string  nombres[8]={""};
    int opcion;
    do{
    mostrarmenu();
    cin>>opcion;
    if (opcion>=0 && opcion<=5){
    switch(opcion){
    case 1:
        cout << "Seleccionaste la opcion numero 1: ";
        cargargeneros(codigos, nombres);
    break;
    case 2:
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
