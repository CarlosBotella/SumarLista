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
    for (int i = 0; i < cuantos; i++) {
        cout << p[i] << endl;
        suma = suma + p[i];
        cout << "suma: " << suma << endl;
    }
    return suma;
}

int main(){
    int lista[100]= {3,4,7,9,10};
    int resultado = sumarLista(&lista[0],5);
    cout << resultado;
    
    
}
