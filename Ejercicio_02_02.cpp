// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 2

// Problema planteado:  Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    const int vect[10]={1,32,-43,4,-7,6,49,8,9,-13};        // creacion de in vector constante
    float porpos=0;
    float porneg=0;
    for(int i=0;i<10;i++){      // recorrido por el vector para determinar los porcentajes
        if(vect[i]%2==0&&vect[i]>=0){
            porpos=porpos+10;
        }
        else{
            if(vect[i]%2!=0&&vect[i]<0){
                porneg=porneg+10;
            }
        }
    }
    cout<<"El porcentaje de pares positivos en el arreglo es de: "<<porpos<<"%"<<endl;
    cout<<"El porcentaje de impares negativos en el arreglo es de: "<<porneg<<"%"<<endl;

    return 0;

}
