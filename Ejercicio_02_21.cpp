// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 21

/* Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada
uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2. */

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {

    int vector1[5];
    int vector2[5];
    int vector3[5];
    for(int i=0;i<5;i++){
        cin>>vector1[i];
    }
    for(int j=0;j<5;j++){
        cin>>vector2[j];
    }
    for(int k=0;k<5;k++){
        vector3[k]=vector1[k]+vector2[k];
        cout<<vector3[k]<<" ";
    }
    return 0;

}

