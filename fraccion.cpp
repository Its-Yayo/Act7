#include "fraccion.h"
#include <iostream>
#include <string>
#include <tgmath.h>

using namespace std;

static const int N[5] = {};

Fraccion::Fraccion(): num(1), den(2) {};
Fraccion::Fraccion(int num, int den): num(num), den(den) {};

double Fraccion::calcularValorReal() {return num / den;};

void Fraccion::sumarFraccion() {}