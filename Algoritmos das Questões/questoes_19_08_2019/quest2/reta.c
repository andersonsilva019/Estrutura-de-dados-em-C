#include "reta.h"
#include <math.h>

float distancia_ponto(Ponto p1, Ponto p2){
    float sub1 = pow((p2.x - p1.x),2);
    float sub2 = pow((p2.y - p1.y),2);
    float dist = sub1 + sub2;

    return sqrt(dist);
}