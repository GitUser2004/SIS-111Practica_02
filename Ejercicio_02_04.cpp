// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 4

/* Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con n�meros al azar, determine:
el porcentaje de mayores (>=18 a�os) y menores de edad (<18 a�os).
Las edades al azar deben ser generadas a partir de 1 a 110 a�os.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int arreglo[50];
    int pormay=0;
    int pormen=0;
    for(int i=0;i<50;i++){      // recorrido por el vector para hallar los mayores y menores
        arreglo[i]=1+rand()%(111-1);
        cout<<arreglo[i]<<" ";
        if(arreglo[i]>=18){
            pormay=pormay+2;
        }
        else{
            pormen=pormen+2;
        }
    }
    cout<<endl<<"El porcentaje de personas mayores de 18 es de: "<<pormay<<"%"<<endl;
    cout<<endl<<"El porcentaje de personas menores de 18 es de: "<<pormen<<"%"<<endl;

    return 0;

}
