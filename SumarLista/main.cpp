//
//  main.cpp
//  SumarLista
//
//  Created by Carlos Botella Navarro on 21/10/21.
//
/*
--------------------------------------------------
 Lista <R> --> sumarLista() --> R
--------------------------------------------------
*/

#include <iostream>
using namespace std;

int sumarLista(int *p, int cuantos){
    int suma = 0;
    for (int i = 0; i < cuantos; i++) { // Bucle para sumar los numeros
        suma = suma + p[i];
    }
    return suma;
}
//-------------------------------------------------
int main(){
    int lista[100]= {3,4,7,9,10};
    int resultado = sumarLista(&lista[0],5); // elijo sumar los 5 primeros numeros de la lista
    cout << "suma: " << resultado << endl;
    
    
}
