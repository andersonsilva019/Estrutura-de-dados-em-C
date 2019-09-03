#include "head.h"

void exibir(Paciente p){
    printf("======= PACIENTE =======\n");
    printf("\nNome: %s",p.nome);
    printf("\nendereco: %s",p.endereco);
    printf("\ntelefone: %d",p.telefone);
    printf("\nData_nas: %d",p.dat_nas);
    printf("\nAltura: %.2f",p.altura);
    printf("\nPeso: %.2f",p.peso);
}