#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int opcion;
    do{
    mostrarmenu();
    cin>>opcion;
    if (opcion>=0 && opcion<=5){
    switch(opcion){
    case 1:
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
