// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 7

/* Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
Escribir un programa que escriba la palabra �Iguales� si ambos vectores son iguales y
�Diferentes� si no lo son. Ser�n iguales cuando en la misma posici�n de ambos vectores se
tenga el mismo valor para todos los elementos. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    const char vector1[][10]={{"Ah"},{"Be"},{"Ce"},{"De"},{"Eh"},{"Fe"},{"Ge"}};        // declaracion de los vectores constantes
    const char vector2[][10]={{"Ae"},{"Be"},{"Ce"},{"De"},{"Eh"},{"Fe"},{"Ge"}};
    int cont=0;
    for(int i=0;i<7;i++){       // ciclo de comparacion
        for(int j=0;j<10;j++){      // segundo ciclo de comparacion para cada nombre
            if(vector1[i][j]==vector2[i][j]){
                cont=cont+1;
            }
        }
    }
    if(cont==70){       // verificacion de que tan parecidos son
        cout<<"Iguales";
    }
    else{
        cout<<"Diferentes";
    }

    return 0;

}
