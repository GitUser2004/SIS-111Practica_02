// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 11

/* Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
este arreglo determine la desviaci�n t�pica. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int n;
    int edades[n];
    int i=0;
    while(edades[i]!=-1){
        cout<<"Ingrese una edad: ";
        cin>>edades[i];
        i=i+1;
        n=i;
    }

    return 0;

}
