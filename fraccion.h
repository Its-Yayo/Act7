#pragma once
#include <iostream>

using namespace std;

class Fraccion {
    
    private: 
        int num, den;

    public:
        Fraccion();
        Fraccion(int, int);

        int getNum(); int getDen();

        void setNum(int);
        void setDen(int);

        double calcularValorReal();
        Fraccion sumarFraccion(Fraccion);
        void imprimeFraccion();

}; 