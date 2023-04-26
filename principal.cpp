#include <iostream>
#include "estructura.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int cant;
    cout <<" Cuantas categorias deseas agragar :";
    cin >> cant;
    for(int i = 0; i < cant; i++){
        cout <<"Ingresa el id: ";
        cin >> categorias [i].idCat;
        cout<< "Ingrese el nombre: ";
        cin >> categorias[i].nombre;

    }
    cout <<"\n\n\n";
    cout <<"Mostrar Categorias \n";
    for(int i=0; i< cant; i++){
        cout <<"ID:"  << categorias[i].idCat << endl;
        cout <<"Nombre:" <<categorias[i].nombre << endl;
        cout <<"===================================\n";
    }

    return 0;
}
