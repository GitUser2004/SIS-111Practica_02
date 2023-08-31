// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 3

/* Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
rango de A - B y determine cuántos de estos elementos son números primos. */
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int arreglo[50];
    int A;
    int B;
    int total=0;
    cout<<"Ingrese el limite superior: ";
    cin>>A;
    cout<<"Ingrese el limite inferior: ";
    cin>>B;
    for(int i=0;i<50;i++){
        int cont=0;
        arreglo[i]=A+rand()%((B+1)-A);
        cout<<arreglo[i]<<" ";
        for(int j=1;j<=arreglo[i];j++){
            if(arreglo[i]%j==0){
                cont=cont+1;
            }
        }
        if(cont<=2&&cont>1){
            total=total+1;
        }
    }
    cout<<endl<<"El total de numeros primos para el arreglo es de: "<<total<<endl;

    return 0;

}
