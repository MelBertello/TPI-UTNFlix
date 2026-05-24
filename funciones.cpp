#include <iostream>
#include "funciones.h"
using namespace std;
void mostrarmenu (){
cout<< "1. Cargar lote de generos " << endl;
cout<< "2. Cargar lote de contenidos " << endl;
cout<< "3. Cargar lote de suscriptores " << endl;
cout<< "4. Cargar lote de reproducciones " << endl;
cout<< "5. Mostrar reportes (submenu) " << endl;
cout<< "6. Salir del programa " << endl;
cout<< " Ingrese una opcion: " << endl;
}
void cargargeneros(int codigos[], string nombres[]){
 for (int i=0; i<8; i++)  {
int cg;
string ng;
cout << "\nRegistro " << i + 1 << " de 8:" << endl;
do{
cout << "Ingrese el codigo de genero (1 a 8)" << endl;
cin >> cg; //codigo del genero
if (cg<=0 || cg>8){
    cout << "El codigo de genero ingresado es incorrecto" << endl;
} }while (cg <= 0 || cg > 8);
cout << "Ingrese el nombre del genero(Ej.: Accion, Drama, Comedia, Terror, Documental, Animacion, Ciencia Ficcion, Romance. )" << endl;
cin >>ng;//nombre del genero
codigos[i] = cg;
nombres[i] = ng;
 }
 cout <<"La carga del lote numero 1 se ha realizado con exito!!" << endl;
}
