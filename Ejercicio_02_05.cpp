// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 5

/* Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int N;
    cout<<"Ingrese el numero de personas para el arreglo: ";
    cin>>N;
    int arreglo[N];     // se determina el tamaño del vector
    int tem;        // variables de apoyo para reordenar el vector
    int x;
    float promedio=0;       // ciclo para llenar el vector
    for(int i=0;i<N;i++){
        arreglo[i]=50+rand()%(241-50);
        cout<<arreglo[i]<<" ";
        promedio=promedio+arreglo[i];
    }
    cout<<endl;
    for(int j=0;j<N;j++){       // ciclo para reordenar el vector
        tem=arreglo[j];     // almacenar los valores en una variable temporal
        x=j;
        for(int k=j+1;k<N;k++){     // segundo ciclo donde se compara para obtener el menor
            if(arreglo[k]<tem){
                tem=arreglo[k];
                x=k;
            }
        }
        arreglo[x]=arreglo[j];
        arreglo[j]=tem;     // reorganizacion del vector
    }
    cout<<endl<<"El promedio de estaturas es de: "<<promedio/N<<"[cm]"<<endl;
    cout<<"La menor estatura registrada es de: "<<arreglo[0]<<"[cm]"<<endl;     // primer valor del vector ordenado es el menor
    cout<<"La mayor estatura registrada es de: "<<arreglo[N-1]<<"[cm]"<<endl;       // ultimo es el mayor

    return 0;

}
