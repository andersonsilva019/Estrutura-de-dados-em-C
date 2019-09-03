#include <stdio.h>
#include <stdlib.h>

typedef struct paciente{
    char nome[100];
    char endereco[50];
    int telefone[8];
    float altura;
    int dat_nas[8];
    float peso;
}Paciente;

typedef struct Paciente paciente

void exibir(Paciente p);
