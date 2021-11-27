#include "fraccion.h"
#include <iostream>
#include <string>
#include <tgmath.h>

#include <numeric>

using namespace std;

static const int N = 5;

Fraccion::Fraccion(): num(1), den(2) {};
Fraccion::Fraccion(int num, int den): num(num), den(den == 0 ? 1 : den) {};

double Fraccion::calcularValorReal() {return num / den;};

Fraccion Fraccion::sumarFraccion(Fraccion aSumar) {
    Fraccion n = *new Fraccion(0,1);
    
    n.den = gcd(den, aSumar.den);
    n.den = (den * aSumar.den) / n.den;

    n.num = (num)*(n.den/den) +  (aSumar.num)*(n.den/aSumar.den);

    int factor = gcd(n.num, n.den);

    n.den = n.den / factor;
    n.num = n.num / factor;

    return n;
}

void Fraccion::imprimeFraccion() {
    printf("En fraccion: %d / %d\n", num, den); 
    printf("En decimal: %lf\n", (double)num / (double)den);

}

