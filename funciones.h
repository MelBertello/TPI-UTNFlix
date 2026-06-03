#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

// Prototipos de funciones
void mostrarmenu();
int cargargeneros(int codigos[], string nombres[]);
void cargarcontenidos(int lotegeneroscargado, int codigosCont[], string titulos[], char tipos[], int duraciones[], float puntajes[], int codGenerosCont[], int codigos[]);
void cargarsuscriptores(int codSus[], int cantPan[], string nomSus[],char planes[]);



#endif
