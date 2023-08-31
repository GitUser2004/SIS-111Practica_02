// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 128/08/2023

// N�mero de ejericio: 1

// Problema planteado: Almacenar un vector de tama�o N, con n�meros al azar entre A y B, e imprima la suma de
// los componentes de �ndice par y la resta de los componentes de �ndice impar.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int n;
    cout<<"Ingrese el tama�o del vector: ";
    cin>>n;
    int A;
    int B;
    int vect[n];
    int suma=0;
    int resta=0;
    cout<<"Ingrese el limite inferior: ";
    cin>>A;
    cout<<"Ingrese el limite superior: ";
    cin>>B;
    for(int i=0;i<n;i++){
        vect[i]=rand()%(B-(A+1));       // generacion de un numero en los parametros
        cout<<vect[i]<<" ";
        if(i%2==0){
            suma=suma+vect[i];      // la suma se realiza comunmente
        }
        else{
            resta=resta-vect[i];        // la resta empieza desde un 0, es decir 0-x...
        }
    }
    cout<<endl<<"La suma de los pares sera de: "<<suma<<endl;
    cout<<"La resta de los impares sera de: "<<resta<<endl;

    return 0;

}
