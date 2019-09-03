#include <stdio.h>
//Aluguel de carro

typedef struct{
    char marca[20];
    char modelo[20];
    float vl_diaria;
    int portas;

}Carro;

void ler_valores(Carro *c);

Carro menor_diaria(Carro *c);

void imprime(Carro *c);

