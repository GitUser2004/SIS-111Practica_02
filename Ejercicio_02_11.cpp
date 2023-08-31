// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 11

/* Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
este arreglo determine la desviación típica. */

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
