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

    int n;
    cout<<"Ingrese el tamaño de los vectores: ";
    cin>>n;
    int vector1[n];
    int vector2[n];
    int vector3[n];
    cout<<"Ingrese los valores del primer vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>vector1[i];
    }
    cout<<"Ingrese los valores del primer vector"<<endl;
    for(int j=0;j<n;j++){
        cin>>vector2[j];
    }
    cout<<"El tercer vector es: ";
    for(int k=0;k<n;k++){
        vector3[k]=vector1[k]*vector2[k];
        cout<<vector3[k]<<" ";
    }
    return 0;

}
