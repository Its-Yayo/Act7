#include "fraccion.h"
#include <iostream>
#include <stdlib.h>

static const int N = 5;
using namespace std;

void sumaArreglo(Fraccion  FraccionArreglo[5]) {
    Fraccion NumFraccion = *new Fraccion(0, 1);

    for(int i = 0; i < N; i++) {
        NumFraccion = NumFraccion.sumarFraccion(FraccionArreglo[i]);
    }

    NumFraccion.imprimeFraccion();
} 

int main() {

    Fraccion arreglo[N];
    int num, den;

    for (int i = 0; i < N; i++) {
        printf("Escribe el numerador: "); cin >> num;
        printf("Escribe el denominador: "); cin >> den;

        arreglo[i] = *(new  Fraccion(num, den));
            
    }

    sumaArreglo(arreglo);

    return 0;
}
