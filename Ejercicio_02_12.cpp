// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 11

/* Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
este arreglo determine la desviación típica. */

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {

    int i=0;
    int e=0;
    float promedio=0;
    float numer=0;
    int auxiliar[e];
    while(i!=-1){
        int edades[e];
        cout<<"Ingrese una edad: ";
        cin>>i;
        if(i!=-1){
            edades[e]=i;
            e=e+1;
            edades[e]=auxiliar[e];
        }
        promedio=promedio+edades[e];
    }
    for(int j=0;j<e;j++){
        int nose=((auxiliar[e])-(promedio/(e-1));
        numer=numer+pow(nose,2));
    }
    cout<<numer;

    return 0;

}
