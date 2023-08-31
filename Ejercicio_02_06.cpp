// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 6

/* Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos
intercalados.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    const int vector1[]={1,3,5,7,9};        // se definen los vectores constantes
    const int vector2[]={2,4,6,8,10};
    int nuevo[10];
    for(int i=0;i<10;i++){      // recorridom para intercalar
        if(i%2==0){
            nuevo[i]=vector1[i/2];      // los otros vectores se dividen ya que son la mitad del nuevo
        }
        else{
            nuevo[i]=vector2[i/2];
        }
    }
    for(int j=0;j<10;j++){
        cout<<nuevo[j]<<" ";
    }

    return 0;

}
